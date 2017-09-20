/********************************************************************************
** Form generated from reading UI file 'editobject.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOBJECT_H
#define UI_EDITOBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_EditObject
{
public:
    QLabel *position;
    QLabel *object_name;
    QLabel *rotation;
    QLabel *radius_label;
    QLabel *radius_label_2;
    QSpinBox *col_b;
    QLabel *color_label;
    QLabel *specular_label;
    QSpinBox *col_g;
    QSpinBox *col_r;
    QLabel *brim_label;
    QSpinBox *brip;
    QLabel *brip_label;
    QDoubleSpinBox *brim;
    QDoubleSpinBox *radius_2;
    QDoubleSpinBox *pos_z;
    QDoubleSpinBox *pos_y;
    QDoubleSpinBox *pos_x;
    QDoubleSpinBox *rot_z;
    QDoubleSpinBox *rot_x;
    QDoubleSpinBox *rot_y;
    QDoubleSpinBox *radius;
    QDoubleSpinBox *angle;
    QLabel *angle_label;
    QDoubleSpinBox *reflection;
    QLabel *reflection_label;
    QLabel *refraction_label;
    QDoubleSpinBox *refraction;
    QPushButton *add_object;
    QDoubleSpinBox *norm_z;
    QLabel *normal;
    QDoubleSpinBox *norm_x;
    QDoubleSpinBox *norm_y;
    QDoubleSpinBox *dir_z;
    QDoubleSpinBox *dir_x;
    QLabel *normal_2;
    QDoubleSpinBox *dir_y;
    QPushButton *import_tex;
    QLabel *tex_path;

    void setupUi(QDialog *EditObject)
    {
        if (EditObject->objectName().isEmpty())
            EditObject->setObjectName(QStringLiteral("EditObject"));
        EditObject->resize(797, 721);
        position = new QLabel(EditObject);
        position->setObjectName(QStringLiteral("position"));
        position->setGeometry(QRect(100, 100, 81, 31));
        QFont font;
        font.setPointSize(22);
        position->setFont(font);
        object_name = new QLabel(EditObject);
        object_name->setObjectName(QStringLiteral("object_name"));
        object_name->setGeometry(QRect(20, 10, 761, 41));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        object_name->setFont(font1);
        object_name->setAlignment(Qt::AlignCenter);
        rotation = new QLabel(EditObject);
        rotation->setObjectName(QStringLiteral("rotation"));
        rotation->setGeometry(QRect(100, 180, 81, 31));
        rotation->setFont(font);
        radius_label = new QLabel(EditObject);
        radius_label->setObjectName(QStringLiteral("radius_label"));
        radius_label->setGeometry(QRect(370, 100, 81, 31));
        radius_label->setFont(font);
        radius_label_2 = new QLabel(EditObject);
        radius_label_2->setObjectName(QStringLiteral("radius_label_2"));
        radius_label_2->setGeometry(QRect(360, 180, 91, 31));
        radius_label_2->setFont(font);
        col_b = new QSpinBox(EditObject);
        col_b->setObjectName(QStringLiteral("col_b"));
        col_b->setGeometry(QRect(650, 140, 48, 24));
        col_b->setMaximum(255);
        color_label = new QLabel(EditObject);
        color_label->setObjectName(QStringLiteral("color_label"));
        color_label->setGeometry(QRect(580, 100, 51, 31));
        color_label->setFont(font);
        specular_label = new QLabel(EditObject);
        specular_label->setObjectName(QStringLiteral("specular_label"));
        specular_label->setGeometry(QRect(570, 180, 91, 31));
        specular_label->setFont(font);
        col_g = new QSpinBox(EditObject);
        col_g->setObjectName(QStringLiteral("col_g"));
        col_g->setGeometry(QRect(590, 140, 48, 24));
        col_g->setMaximum(255);
        col_r = new QSpinBox(EditObject);
        col_r->setObjectName(QStringLiteral("col_r"));
        col_r->setGeometry(QRect(530, 140, 48, 24));
        col_r->setMaximum(255);
        brim_label = new QLabel(EditObject);
        brim_label->setObjectName(QStringLiteral("brim_label"));
        brim_label->setGeometry(QRect(560, 210, 31, 41));
        brim_label->setFont(font);
        brip = new QSpinBox(EditObject);
        brip->setObjectName(QStringLiteral("brip"));
        brip->setGeometry(QRect(590, 260, 48, 24));
        brip->setSingleStep(1);
        brip_label = new QLabel(EditObject);
        brip_label->setObjectName(QStringLiteral("brip_label"));
        brip_label->setGeometry(QRect(560, 250, 31, 41));
        brip_label->setFont(font);
        brim = new QDoubleSpinBox(EditObject);
        brim->setObjectName(QStringLiteral("brim"));
        brim->setGeometry(QRect(590, 220, 67, 24));
        radius_2 = new QDoubleSpinBox(EditObject);
        radius_2->setObjectName(QStringLiteral("radius_2"));
        radius_2->setGeometry(QRect(370, 220, 67, 24));
        pos_z = new QDoubleSpinBox(EditObject);
        pos_z->setObjectName(QStringLiteral("pos_z"));
        pos_z->setGeometry(QRect(200, 140, 67, 24));
        pos_z->setMinimum(-9999);
        pos_z->setMaximum(9999);
        pos_y = new QDoubleSpinBox(EditObject);
        pos_y->setObjectName(QStringLiteral("pos_y"));
        pos_y->setGeometry(QRect(120, 140, 67, 24));
        pos_y->setMinimum(-9999);
        pos_y->setMaximum(9999);
        pos_x = new QDoubleSpinBox(EditObject);
        pos_x->setObjectName(QStringLiteral("pos_x"));
        pos_x->setGeometry(QRect(40, 140, 67, 24));
        pos_x->setMinimum(-9999);
        pos_x->setMaximum(9999);
        rot_z = new QDoubleSpinBox(EditObject);
        rot_z->setObjectName(QStringLiteral("rot_z"));
        rot_z->setGeometry(QRect(200, 220, 67, 24));
        rot_z->setMinimum(-9999);
        rot_z->setMaximum(99999);
        rot_x = new QDoubleSpinBox(EditObject);
        rot_x->setObjectName(QStringLiteral("rot_x"));
        rot_x->setGeometry(QRect(40, 220, 67, 24));
        rot_x->setMinimum(-9999);
        rot_x->setMaximum(99999);
        rot_y = new QDoubleSpinBox(EditObject);
        rot_y->setObjectName(QStringLiteral("rot_y"));
        rot_y->setGeometry(QRect(120, 220, 67, 24));
        rot_y->setMinimum(-9999);
        rot_y->setMaximum(99999);
        radius = new QDoubleSpinBox(EditObject);
        radius->setObjectName(QStringLiteral("radius"));
        radius->setGeometry(QRect(370, 140, 67, 24));
        angle = new QDoubleSpinBox(EditObject);
        angle->setObjectName(QStringLiteral("angle"));
        angle->setGeometry(QRect(370, 300, 67, 24));
        angle_label = new QLabel(EditObject);
        angle_label->setObjectName(QStringLiteral("angle_label"));
        angle_label->setGeometry(QRect(370, 260, 81, 31));
        angle_label->setFont(font);
        reflection = new QDoubleSpinBox(EditObject);
        reflection->setObjectName(QStringLiteral("reflection"));
        reflection->setGeometry(QRect(590, 360, 67, 24));
        reflection_label = new QLabel(EditObject);
        reflection_label->setObjectName(QStringLiteral("reflection_label"));
        reflection_label->setGeometry(QRect(570, 320, 101, 31));
        reflection_label->setFont(font);
        refraction_label = new QLabel(EditObject);
        refraction_label->setObjectName(QStringLiteral("refraction_label"));
        refraction_label->setGeometry(QRect(570, 410, 101, 31));
        refraction_label->setFont(font);
        refraction = new QDoubleSpinBox(EditObject);
        refraction->setObjectName(QStringLiteral("refraction"));
        refraction->setGeometry(QRect(590, 450, 67, 24));
        add_object = new QPushButton(EditObject);
        add_object->setObjectName(QStringLiteral("add_object"));
        add_object->setGeometry(QRect(310, 590, 151, 81));
        norm_z = new QDoubleSpinBox(EditObject);
        norm_z->setObjectName(QStringLiteral("norm_z"));
        norm_z->setGeometry(QRect(200, 300, 67, 24));
        norm_z->setMinimum(-9999);
        norm_z->setMaximum(9999);
        normal = new QLabel(EditObject);
        normal->setObjectName(QStringLiteral("normal"));
        normal->setGeometry(QRect(100, 260, 81, 31));
        normal->setFont(font);
        norm_x = new QDoubleSpinBox(EditObject);
        norm_x->setObjectName(QStringLiteral("norm_x"));
        norm_x->setGeometry(QRect(40, 300, 67, 24));
        norm_x->setMinimum(-9999);
        norm_x->setMaximum(9999);
        norm_y = new QDoubleSpinBox(EditObject);
        norm_y->setObjectName(QStringLiteral("norm_y"));
        norm_y->setGeometry(QRect(120, 300, 67, 24));
        norm_y->setMinimum(-9999);
        norm_y->setMaximum(9999);
        dir_z = new QDoubleSpinBox(EditObject);
        dir_z->setObjectName(QStringLiteral("dir_z"));
        dir_z->setGeometry(QRect(200, 390, 67, 24));
        dir_z->setMinimum(-9999);
        dir_z->setMaximum(9999);
        dir_x = new QDoubleSpinBox(EditObject);
        dir_x->setObjectName(QStringLiteral("dir_x"));
        dir_x->setGeometry(QRect(40, 390, 67, 24));
        dir_x->setMinimum(-9999);
        dir_x->setMaximum(9999);
        normal_2 = new QLabel(EditObject);
        normal_2->setObjectName(QStringLiteral("normal_2"));
        normal_2->setGeometry(QRect(100, 350, 91, 31));
        normal_2->setFont(font);
        dir_y = new QDoubleSpinBox(EditObject);
        dir_y->setObjectName(QStringLiteral("dir_y"));
        dir_y->setGeometry(QRect(120, 390, 67, 24));
        dir_y->setMinimum(-9999);
        dir_y->setMaximum(9999);
        import_tex = new QPushButton(EditObject);
        import_tex->setObjectName(QStringLiteral("import_tex"));
        import_tex->setGeometry(QRect(20, 480, 121, 41));
        tex_path = new QLabel(EditObject);
        tex_path->setObjectName(QStringLiteral("tex_path"));
        tex_path->setGeometry(QRect(150, 490, 631, 16));
        QFont font2;
        font2.setPointSize(15);
        font2.setItalic(true);
        tex_path->setFont(font2);

        retranslateUi(EditObject);

        QMetaObject::connectSlotsByName(EditObject);
    } // setupUi

    void retranslateUi(QDialog *EditObject)
    {
        EditObject->setWindowTitle(QApplication::translate("EditObject", "Dialog", 0));
        position->setText(QApplication::translate("EditObject", "Position", 0));
        object_name->setText(QApplication::translate("EditObject", "Object", 0));
        rotation->setText(QApplication::translate("EditObject", "Rotation", 0));
        radius_label->setText(QApplication::translate("EditObject", "Radius", 0));
        radius_label_2->setText(QApplication::translate("EditObject", "Radius 2", 0));
        color_label->setText(QApplication::translate("EditObject", "Color", 0));
        specular_label->setText(QApplication::translate("EditObject", "Specular", 0));
        brim_label->setText(QApplication::translate("EditObject", "M:", 0));
        brip_label->setText(QApplication::translate("EditObject", "P:", 0));
        angle_label->setText(QApplication::translate("EditObject", "Angle", 0));
        reflection_label->setText(QApplication::translate("EditObject", "Reflection", 0));
        refraction_label->setText(QApplication::translate("EditObject", "Refraction", 0));
        add_object->setText(QApplication::translate("EditObject", "Add Object", 0));
        normal->setText(QApplication::translate("EditObject", "Normal", 0));
        normal_2->setText(QApplication::translate("EditObject", "Direction", 0));
        import_tex->setText(QApplication::translate("EditObject", "Import texture", 0));
        tex_path->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditObject: public Ui_EditObject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOBJECT_H
