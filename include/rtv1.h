/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 13:49:49 by jbelless          #+#    #+#             */
/*   Updated: 2016/06/07 18:10:43 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H

# include "libft.h"
# include <math.h>
# include <fcntl.h>
# include <time.h>
# include <pthread.h>
# include "mlx.h"

# define COLOR_CLIP(x) (x < 1) ? x : 1

# define THREAD_NUM 1
# define SIZE_W 1000
# define SIZE_H 800
# define WIDTH 100
# define HIGHT 80
# define NOISE_WIDTH 3000
# define NOISE_HEIGHT 3000
# define FAR 1000000000
# define NB_ITER 10
# define TRUE 1
# define FALSE 0

# define ERR_NO_SCENE "Error: Add a <scene> object to your scene.\n"
# define ERR_NO_CAM "Error: add a camera to your scene.\n"
# define ERR_NO_CONFIG "Error: There are no config in your scene file.\n"

/*
**  ____________________________________________________________________
** |																	|
** |				** MUCH TYPEDEFS, SUCH STRUCTS **					|
** |____________________________________________________________________|
*/
typedef struct	s_tvn
{
	double		t;
	int			vn;
}				t_tvn;

typedef struct	s_equ
{
	double		x1;
	double		x2;
	double		y1;
	double		y2;
	double		z1;
	double		z2;
	double		c;
}				t_equ;

typedef struct	s_vec3
{
	double		x;
	double		y;
	double		z;
}				t_vec3;

typedef struct	s_color
{
	double		r;
	double		g;
	double		b;
}				t_color;

typedef struct	s_color_res
{
	t_color		diffuse;
	t_color		specular;
	t_color		*refl;
	t_color		*refr;
}				t_color_res;

typedef struct	s_smooth
{
	double		fract_x;
	double		fract_y;
	double		value;
	int			x1;
	int			y1;
	int			x2;
	int			y2;
}				t_smooth;

typedef struct	s_wood
{
	t_color		c;
	double		x_val;
	double		y_val;
	double		dist_val;
	double		sine_val;
	int			x;
	int			y;
}				t_wood;

typedef struct	s_norm_tex
{
	float		teta;
	float		teta_a;
	float		teta_b;
	float		za;
	float		zb;
	float		z;
	float		y;
	float		yb;
	float		rayon;
}				t_norm_tex;

typedef struct	s_c_tore
{
	t_color		col;
	t_vec3		pos;
	t_vec3		dir;
	double		rayon;
	double		rayon2;
	double		iter;
}				t_c_tore;

typedef struct	s_c_helice
{
	t_color		col;
	t_vec3		pos;
	t_vec3		dir;
	double		rayon;
	double		rayon2;
	double		iter;
	double		height;
}				t_c_helice;

typedef struct	s_tex
{
	char		*tex;
	int			height;
	int			width;
	double		off_x;
	double		off_y;
	int			height1;
	int			width1;
	int			bpp;
	int			ls;
	int			endian;
	void		*img;
	char		*buf;
}				t_tex;

typedef struct	s_mat
{
	t_color		col;
	char		grid;
	t_tex		tex;
	double		brim;
	char		brip;
	double		i_opt;
	double		opac;
	double		refr;
	double		refl;
	char		waves;
}				t_mat;

typedef struct	s_light
{
	t_vec3		pos;
	t_vec3		dir;
	t_vec3		offset;
	t_color		col;
	double		k;
	double		new_k;
	double		dist_light;
	int			nb_light;
}				t_light;

typedef	struct	s_cam
{
	t_vec3		pos;
	t_vec3		angle;
	t_vec3		dir;
	t_vec3		up;
	t_vec3		right;
	double		distfo;
}				t_cam;

typedef struct	s_ray
{
	t_vec3		pos;
	t_vec3		dir;
	double		i_opt;
	int			iter;
}				t_ray;

typedef	struct	s_face
{
	int			v1;
	int			v2;
	int			v3;
	int			vn;
}				t_face;

typedef struct	s_obj
{
	t_vec3		*(*get_normal)();
	double		*(*get_inters)(t_ray *ray, struct s_obj *obj);
	double		rayon;
	double		rayon2;
	double		angle;
	t_vec3		rot;
	t_vec3		pos;
	t_vec3		norm;
	t_vec3		scale;
	t_vec3		dir;
	t_vec3		dir2;
	t_vec3		dir3;
	t_vec3		speed;
	t_vec3		*v;
	t_vec3		*vn;
	char		*path;
	t_list		*face;
	t_mat		mat;
	t_equ		equ;
}				t_obj;

typedef	struct	s_pix
{
	t_obj		*obj;
	t_color		*col;
	double		t;
}				t_pix;

typedef struct	s_obj_col
{
	t_obj		*obj;
	double		*t;
	char		neg;
	int			vn;
}				t_obj_col;

typedef enum	e_op
{
	empty,
	inters,
	sub,
	uni
}				t_op;

typedef struct	s_nod
{
	t_op			op;
	struct s_nod	*r;
	struct s_nod	*l;
	t_obj_col		*obj_col;
	t_obj			*obj;
	int				id;
}				t_nod;

typedef struct	s_work
{
	t_obj		*obj;
	int			vn;
	t_light		*light;
	t_vec3		*normal;
	t_ray		*ray;
}				t_work;

typedef struct	s_shadow
{
	t_color_res	col_res;
	t_list		*lst;
	t_color		*final_col;
	t_work		work;
	double		refl;
	t_ray		*ray_refr;
	t_ray		*ray_refl;
	t_color		col;
}				t_shadow;

/*
**  ____________________________________________________________________
** |																	|
** |						==> JUNKS HERE	<==							|
** |____________________________________________________________________|
*/
typedef struct	s_env
{
	int			bpp;
	int			endian;
	int			endian1;
	int			bpp1;
	int			ls1;
	int			ls;
	void		*img1;
	char		*buf;
	int			aa;
	int			xx;
	int			yy;
	void		*mlx;
	void		*win;
	void		*img;
	char		*data;
	void		*img2;
	char		*data2;
	t_vec3		pix_zero;
	t_cam		cam;
	t_list		*obj;
	t_list		*light;
	int			color_m;
	double		amb;
	t_pix		*pix;
	int			start;
	t_list		*c_obj;
}				t_env;

/*
**  ____________________________________________________________________
** |																	|
** |				**  DOES NOT DESERVE TO BE HERE	**					|
** |____________________________________________________________________|
*/
typedef struct	s_norm_stock_size_tex
{
	int			fd;
	char		*buf;
	int			res;
	int			i;
	char		*width;
	char		*height;
	char		**split;
}				t_norm_stock_size_tex;

typedef struct	s_norm_ft_atod
{
	double		res;
	char		sgn;
	int			pt;
}				t_norm_ft_atod;

typedef struct	s_norm_ft_calc_final_col
{
	t_env		*e;
	t_color		*final_col;
	t_color		*col;
	t_obj		*cur_obj;
	t_color_res	*col_res;
	double		refl;
}				t_norm_ft_calc_final_col;

/*
**  ____________________________________________________________________
** |																	|
** |						**  PARSER STRUCTS **						|
** |____________________________________________________________________|
*/
typedef struct	s_light_parser
{
	char		*position;
	char		*color;
	char		*intensity;
	char		*nb_light;
	char		*dist_light;
	char		*dist;
}				t_light_parser;

typedef struct	s_set_cobj
{
	char		*form;
	char		*unio;
	char		*substit;
	char		*intersect;
	int			i;
	int			u;
	int			s;
}				t_set_cobj;

typedef struct	s_set_obj
{
	char		*position;
	char		*path;
	char		*direction;
	char		*direction2;
	char		*rotation;
	char		*normal;
	char		*radius;
	char		*radius2;
	char		*scale;
	char		*angle;
	char		*mat;
	char		*equ;
	char		*speed;
}				t_set_obj;

typedef struct	s_get_cobj
{
	char		*content;
	int			pos;
	size_t		len;
	char		*unio;
	char		*inters;
	char		*sub;
	int			u;
	int			i;
	int			s;
}				t_get_cobj;

typedef struct	s_getlst
{
	char		*position;
	char		*rotation;
	char		*cspeed;
	char		*id;
	t_vec3		pos;
	t_vec3		rot;
	t_vec3		speed;
	t_nod		*nod;
	t_list		*save;
}				t_getlst;

typedef struct	s_tree_vec3
{
	t_vec3		pos;
	t_vec3		rot;
	t_vec3		speed;
}				t_tree_vec3;

/*
**  ____________________________________________________________________
** |																	|
** |							**  PROTOTYPES **						|
** |____________________________________________________________________|
*/
void			ft_init_nod(t_nod *sphere_obj, t_nod *sphere2_obj,
					t_nod *cyl_obj);
void			ft_pos_sphere(t_nod *sphere_obj, t_nod *sphere2_obj,
					t_c_helice helice, float t);
void			ft_set_cyl_obj(t_nod *cyl_obj, t_c_helice helice, float t);
void			ft_init_sphereh(t_nod *sphere, t_c_helice helice);
void			ft_dir_cyl(t_nod *cyl, t_nod *cube, t_c_helice helice, int t);
void			ft_init_cyl(t_nod *cyl, t_nod *cube, t_c_helice helice);
void			ft_init_sphere(t_nod *sphere, t_c_tore tore2);
void			ft_dir3(t_vec3 dir, t_vec3 dir2, t_vec3 *dir3);
void			ft_put_pixelle(int x, int y, unsigned int c, t_env *e);
void			ft_pixmalloc(t_pix *pix);
void			ft_print_img(t_env *e);

void			ft_creat_img(t_env *e);
double			ft_equa_sec(double a, double b, double c);
void			ft_creat_win(t_env *e);
t_ray			*ft_refr(t_ray *ray, t_work *work, double *refl);
t_ray			*ft_refl(t_ray *ray, t_work *work);
double			ft_nb_nod(t_nod *nod);
void			ft_free_tcol(t_obj_col *tcol, double n);
void			ft_free_tnod(t_nod *nod);
int				ft_opop(double t, t_nod *nod);
void			ft_sort_tnod(t_obj_col *tcol, t_nod *tnod, double n);
t_obj_col		*ft_get_inters(t_nod *nod, t_ray *ray);
int				ft_get_composed_objects(char *objects, size_t len, t_env *e);

/*
** Calc Image
*/
void			*ft_fill_img(void *e);

/*
** Texture
*/
void			init_tex(t_env *e);
int				ft_select_texture(t_ray *ray, double t, t_obj *cur_obj,
					t_color *col);
t_vec3			ft_norm_tex(t_ray *ray, double t, t_obj *cur_obj, int i);
void			ft_norm_tex_rot(t_obj *cur_obj, t_vec3 *pos);
t_color			ft_get_tex_color(int x, int y, t_obj *cur_obj);
unsigned int	ft_texture_sphere(t_ray *ray, double t, t_obj *cur_obj,
					t_color *col);
int				ft_texture(t_ray *ray, double t, t_obj *cur_obj, t_color *col);
void			ft_rot_axex(double angle, t_vec3 *vec);
void			ft_rot_axez(double angle, t_vec3 *vec);
void			ft_rot_axey(double angle, t_vec3 *vec);

/*
** Normals
*/
t_vec3			*normal_sphere(t_ray *ray, t_obj *obj);
t_vec3			*normal_cyl(t_ray *ray, t_obj *obj);
t_vec3			*normal_cube(t_ray *ray, t_obj *obj);
t_vec3			*normal_tore(t_ray *ray, t_obj *obj);
t_vec3			*normal_cone(t_ray *ray, t_obj *obj);
t_vec3			*normal_tore(t_ray *ray, t_obj *obj);
t_vec3			*normal_plan(t_ray *ray, t_obj *obj);
t_vec3			*normal_quadra(t_ray *ray, t_obj *obj);
t_vec3			*normal_pobj(t_ray *ray, t_obj *obj, int vn);

/*
** Intersects
*/
double			*inters_sphere(t_ray *ray, t_obj *obj);
double			*inters_cyl(t_ray *ray, t_obj *obj);
double			*inters_cone(t_ray *ray, t_obj *obj);
double			*inters_tore(t_ray *ray, t_obj *obj);
double			*inters_quadra(t_ray *ray, t_obj *obj);
double			*inters_pobj(t_ray *ray, t_obj *obj);
double			*inters_plan(t_ray *ray, t_obj *obj);
double			*inters_cube(t_ray *ray, t_obj *obj);

t_obj_col		*ft_union_obj(t_nod *nod1, t_nod *nod2, t_ray *ray);
t_obj_col		*ft_inters_obj(t_nod *nod1, t_nod *nod2, t_ray *ray);
t_obj_col		*ft_sub_obj(t_nod *nod1, t_nod *nod2, t_ray *ray);

/*
** Math
*/
void			ft_normalise(t_vec3 *vec);
double			ft_norm(t_vec3 *vec);
double			carre(double x);
double			scal(t_vec3 a, t_vec3 b);
double			scal2(t_vec3 a);
t_vec3			*pro(double a, t_vec3 *d);
void			ft_rot_vec(double angle, t_vec3 axe, t_vec3 *vec);
double			*ft_equa_sec2(double a, double b, double c);

/*
** Rotation
*/
t_vec3			ft_rotate(t_vec3 v, t_vec3 center, t_vec3 rot);

/*
** Utils.c
*/
char			*ft_strjoin_free(char *s1, char *s2);
double			ft_atod(char *s);
void			ft_error_exit(const char *error);

/*
** Parsing
*/
char			*ft_get_inner(char *str, char *obj, int *end_tag,
					int *start_tag);
void			ft_parse_scene(char *file, t_env *e);

int				ft_get_cylinders(char *objects, size_t len, t_env *e);
int				ft_get_tores(char *objects, size_t len, t_env *e);
int				ft_get_spheres(char *objects, size_t len, t_env *e);
int				ft_get_cones(char *objects, size_t len, t_env *e);
int				ft_get_planes(char *objects, size_t len, t_env *e);
int				ft_get_tores(char *objects, size_t len, t_env *e);
int				ft_get_quadras(char *objects, size_t len, t_env *e);
int				ft_get_pobjs(char *objects, size_t len, t_env *e);
int				ft_get_lights(char *lights, size_t len, t_env *e);
void			ft_get_union(char *unio, t_env *e, t_nod *prnt);
int				ft_get_inter(char *inters, t_env *e, t_nod *prnt);
int				ft_get_sub(char *sub, t_env *e, t_nod *prnt);
int				ft_get_cobj(char *objects, t_env *e);
int				ft_get_objtolist(char *objects, size_t len, t_env *e);
int				ft_get_cubes(char *objects, size_t len, t_env *e);

void			ft_set_mat(char *mat, t_obj *obj);
void			ft_set_equ(char *equ, t_obj *obj);
void			ft_set_cone(char *cone, t_env *e, t_nod *prnt);
void			ft_set_tore(char *tore, t_env *e, t_nod *prnt);
void			ft_set_quadra(char *quadra, t_env *e, t_nod *prnt);
int				ft_set_vec3(char *obj, t_vec3 *vec3);
int				ft_set_color(char *obj, t_color *col);
int				ft_set_camera(char *camera, t_env *e);
int				ft_set_config(char *config, t_env *e);
int				ft_set_cylinder(char *cylinder, t_env *e, t_nod *prnt);
int				ft_set_sphere(char *sphere, t_env *e, t_nod *prnt);
int				ft_set_plane(char *plane, t_env *e, t_nod *prnt);
int				ft_set_cube(char *plane, t_env *e, t_nod *prnt);
int				ft_set_pobj(char *pobj, t_env *e, t_nod *prnt);

void			ft_rot_obj(t_obj *obj, t_vec3 rot);
void			ft_read_face(t_obj *pobj, char *line, int size[3]);
void			ft_read_pobj(char *path, t_obj *pobj);
void			ft_tab_vec(t_obj *pobj, int size[3], t_list *lst);
void			ft_read_vec(t_list **lst, char *line);

/*
** Noise
*/
void			generate_noise(double ***noise);
double			smooth_noise(double x, double y, double ***noise);
double			turbulence(double x, double y, double size, double ***noise);
char			*gen_noise(double size);
char			*gen_wood(double xy_period, double turb_power,
					double turb_size);

t_color			get_pixel_color(char *data, int x, int y);
void			put_pixel(char **data, int x, int y, int color);

/*
** Shadow
*/
void			ft_calc_filtre(t_color *filtre, t_obj *obj);
t_color			*ft_ishadow(t_env *e, t_ray *ray, t_tvn tvn, t_obj *cur_obj);
void			ft_in_light(t_work *work, t_env *e, t_color_res *col_res);
void			ft_smooth_shadows(t_shadow *s, t_env *e);

int				ft_checkerboard(t_ray *ray, double t);
void			ft_color_mode(t_color *c, t_env *e);
void			ft_bri_max(t_color_res *colres);

double			ft_dist_light(t_vec3 *ray_pos, t_light *light);

t_ray			*ft_calc_ray(int x, int y, t_env *e);
t_ray			*ft_recalc_ori(t_ray *ray, double t);
void			ft_recalc_dir(t_light *light, t_ray *ray, t_vec3 *norm);
double			ft_dist(int i, t_env *e);
double			ft_angle_contact(t_ray *ray, t_vec3 *normal);
double			ft_dist(int i, t_env *e);
double			ft_brillance(t_vec3 *pos_cam, t_ray *ray, t_vec3 *normal);
t_color			*ft_contact(t_ray *ray, t_env *e, t_obj **objpix);

void			ft_make_screen(t_env *e, char *name);

void			ft_antialiasing(t_env *e);
void			ft_correction(t_env *e);
void			ft_antialiasing(t_env *e);
void			ft_correction(t_env *e);

void			ft_celshading(t_env *e);

void			ft_motion_blur(t_env *e);

#endif
