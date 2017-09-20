/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascholle <ascholle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 09:50:27 by ascholle          #+#    #+#             */
/*   Updated: 2016/06/07 14:05:41 by ebouther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	add_to_line(char **line, char *buffer)
{
	char	*tmp;

	tmp = ft_strdup(*line);
	free(*line);
	*line = ft_strjoin(tmp, buffer);
	free(tmp);
}

int		read_buffer(t_list *elem)
{
	char	*buffer;
	int		ret;

	ret = BUFF_SIZE;
	if ((buffer = (char *)ft_memalloc(BUFF_SIZE + 1)) == NULL)
		return (-1);
	while (ret > 0 && (((t_fd *)elem->content)->line == NULL ||
			(ret == BUFF_SIZE &&
			ft_strchr(((t_fd *)elem->content)->line, '\n') == NULL)))
	{
		if ((ret = read(((t_fd *)elem->content)->fd, buffer, BUFF_SIZE)) == -1)
			return (ret);
		buffer[ret] = '\0';
		if (((t_fd *)elem->content)->line != NULL)
			add_to_line(&(((t_fd *)elem->content)->line), buffer);
		else
			((t_fd*)elem->content)->line = ft_strdup(buffer);
	}
	ret = (ret <= 0 && ft_strlen(buffer) == 0) ? 0 : 1;
	free(buffer);
	return (ret);
}

t_list	*ft_elem(int const fd, t_list **lst)
{
	t_list		*elem;

	elem = *lst;
	while (elem != NULL)
	{
		if (((t_fd*)elem->content)->fd == fd)
			return (elem);
		elem = elem->next;
	}
	if ((elem = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if ((elem->content = (t_fd *)malloc(sizeof(t_fd))) == NULL)
		return (NULL);
	((t_fd*)elem->content)->fd = fd;
	((t_fd*)elem->content)->line = NULL;
	ft_lstadd(lst, elem);
	return (elem);
}

int		supr_lst(t_list **root, int fd, int ret)
{
	t_list	*tmp;
	t_list	*lst;

	lst = *root;
	if (lst)
	{
		if (((t_fd *)lst->content)->fd == fd)
			*root = (*root)->next;
		else
			while (lst->next)
			{
				if (((t_fd *)lst->next->content)->fd == fd)
				{
					free(((t_fd *)lst->next->content)->line);
					tmp = lst->next;
					lst->next = lst->next->next;
					free(tmp);
				}
				lst = lst->next;
			}
	}
	return (ret);
}

int		get_next_line(int const fd, char **line)
{
	static t_list	*lst_fd = NULL;
	t_list			*elem;
	char			*tmp;
	int				ret;
	int				i;

	i = 0;
	tmp = NULL;
	if (fd < 0 || line == NULL)
		return (-1);
	elem = ft_elem(fd, &lst_fd);
	if (((t_fd *)elem->content)->line == NULL ||
		ft_strchr(((t_fd *)elem->content)->line, '\n') == NULL)
		if ((ret = read_buffer(elem)) != 1 && (((t_fd *)elem->content)->line ==
			NULL || ft_strlen(((t_fd *)elem->content)->line) == 0))
			return (supr_lst(&lst_fd, fd, ret));
	while (((t_fd*)elem->content)->line[i] != '\0' &&
			((t_fd *)elem->content)->line[i] != '\n')
		i++;
	*line = ft_strsub(((t_fd *)elem->content)->line, 0, i);
	tmp = ft_strdup(((t_fd *)elem->content)->line + i + 1);
	free(((t_fd *)elem->content)->line);
	((t_fd *)elem->content)->line = ft_strdup(tmp);
	free(tmp);
	return (1);
}
