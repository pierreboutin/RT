/********************************************************************************
** Form generated from reading UI file 'editlight.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITLIGHT_H
#define UI_EDITLIGHT_H

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

class Ui_EditLight
{
public:
    QLabel *light;
    QDoubleSpinBox *pos_z;
    QLabel *radius_label;
    QPushButton *add_light;
    QSpinBox *col_g;
    QDoubleSpinBox *pos_y;
    QLabel *color_label;
    QSpinBox *col_r;
    QDoubleSpinBox *pos_x;
    QSpinBox *col_b;
    QLabel *position;
    QDoubleSpinBox *intensity;
    QLabel *position_2;
    QSpinBox *nb_light;
    QLabel *radius_label_2;
    QSpinBox *dist_light;
    QLabel *radius_label_3;

    void setupUi(QDialog *EditLight)
    {
        if (EditLight->objectName().isEmpty())
            EditLight->setObjectName(QStringLiteral("EditLight"));
        EditLight->resize(374, 622);
        light = new QLabel(EditLight);
        light->setObjectName(QStringLiteral("light"));
        light->setGeometry(QRect(120, 20, 111, 41));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        light->setFont(font);
        light->setAlignment(Qt::AlignCenter);
        pos_z = new QDoubleSpinBox(EditLight);
        pos_z->setObjectName(QStringLiteral("pos_z"));
        pos_z->setGeometry(QRect(230, 140, 67, 24));
        pos_z->setMinimum(-9999);
        pos_z->setMaximum(9999);
        radius_label = new QLabel(EditLight);
        radius_label->setObjectName(QStringLiteral("radius_label"));
        radius_label->setGeometry(QRect(140, 250, 91, 31));
        QFont font1;
        font1.setPointSize(22);
        font1.setItalic(true);
        radius_label->setFont(font1);
        add_light = new QPushButton(EditLight);
        add_light->setObjectName(QStringLiteral("add_light"));
        add_light->setGeometry(QRect(110, 530, 151, 81));
        col_g = new QSpinBox(EditLight);
        col_g->setObjectName(QStringLiteral("col_g"));
        col_g->setGeometry(QRect(160, 210, 48, 24));
        col_g->setMaximum(255);
        col_g->setValue(255);
        pos_y = new QDoubleSpinBox(EditLight);
        pos_y->setObjectName(QStringLiteral("pos_y"));
        pos_y->setGeometry(QRect(150, 140, 67, 24));
        pos_y->setMinimum(-9999);
        pos_y->setMaximum(9999);
        color_label = new QLabel(EditLight);
        color_label->setObjectName(QStringLiteral("color_label"));
        color_label->setGeometry(QRect(150, 170, 61, 31));
        color_label->setFont(font1);
        col_r = new QSpinBox(EditLight);
        col_r->setObjectName(QStringLiteral("col_r"));
        col_r->setGeometry(QRect(100, 210, 48, 24));
        col_r->setMaximum(255);
        col_r->setValue(255);
        pos_x = new QDoubleSpinBox(EditLight);
        pos_x->setObjectName(QStringLiteral("pos_x"));
        pos_x->setGeometry(QRect(70, 140, 67, 24));
        pos_x->setMinimum(-9999);
        pos_x->setMaximum(9999);
        col_b = new QSpinBox(EditLight);
        col_b->setObjectName(QStringLiteral("col_b"));
        col_b->setGeometry(QRect(220, 210, 48, 24));
        col_b->setMaximum(255);
        col_b->setValue(255);
        position = new QLabel(EditLight);
        position->setObjectName(QStringLiteral("position"));
        position->setGeometry(QRect(140, 100, 81, 31));
        position->setFont(font1);
        intensity = new QDoubleSpinBox(EditLight);
        intensity->setObjectName(QStringLiteral("intensity"));
        intensity->setGeometry(QRect(150, 290, 67, 24));
        intensity->setValue(0.3);
        position_2 = new QLabel(EditLight);
        position_2->setObjectName(QStringLiteral("position_2"));
        position_2->setGeometry(QRect(90, 340, 181, 31));
        QFont font2;
        font2.setPointSize(22);
        font2.setItalic(false);
        font2.setUnderline(true);
        position_2->setFont(font2);
        nb_light = new QSpinBox(EditLight);
        nb_light->setObjectName(QStringLiteral("nb_light"));
        nb_light->setGeometry(QRect(220, 400, 48, 24));
        nb_light->setMaximum(999);
        nb_light->setValue(0);
        radius_label_2 = new QLabel(EditLight);
        radius_label_2->setObjectName(QStringLiteral("radius_label_2"));
        radius_label_2->setGeometry(QRect(40, 390, 171, 41));
        QFont font3;
        font3.setPointSize(19);
        font3.setItalic(true);
        radius_label_2->setFont(font3);
        dist_light = new QSpinBox(EditLight);
        dist_light->setObjectName(QStringLiteral("dist_light"));
        dist_light->setGeometry(QRect(220, 450, 48, 24));
        dist_light->setMaximum(999);
        dist_light->setValue(0);
        radius_label_3 = new QLabel(EditLight);
        radius_label_3->setObjectName(QStringLiteral("radius_label_3"));
        radius_label_3->setGeometry(QRect(40, 440, 171, 41));
        radius_label_3->setFont(font3);

        retranslateUi(EditLight);

        QMetaObject::connectSlotsByName(EditLight);
    } // setupUi

    void retranslateUi(QDialog *EditLight)
    {
        EditLight->setWindowTitle(QApplication::translate("EditLight", "Dialog", 0));
        light->setText(QApplication::translate("EditLight", "Light", 0));
        radius_label->setText(QApplication::translate("EditLight", "Intensity", 0));
        add_light->setText(QApplication::translate("EditLight", "Add Light", 0));
        color_label->setText(QApplication::translate("EditLight", "Color", 0));
        position->setText(QApplication::translate("EditLight", "Position", 0));
        position_2->setText(QApplication::translate("EditLight", "Smooth Shadow:", 0));
        radius_label_2->setText(QApplication::translate("EditLight", "Number of lights :", 0));
        radius_label_3->setText(QApplication::translate("EditLight", "Distance of lights :", 0));
    } // retranslateUi

};

namespace Ui {
    class EditLight: public Ui_EditLight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITLIGHT_H
