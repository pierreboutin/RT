/********************************************************************************
** Form generated from reading UI file 'editscene.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSCENE_H
#define UI_EDITSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditScene
{
public:
    QPushButton *save_scene;
    QPushButton *preview;
    QPushButton *add_object;
    QListWidget *object_list;
    QPushButton *add_light;
    QGroupBox *groupBox;
    QDoubleSpinBox *pos_z;
    QLabel *position;
    QDoubleSpinBox *pos_x;
    QDoubleSpinBox *pos_y;
    QLabel *position_2;
    QDoubleSpinBox *angle_x;
    QDoubleSpinBox *angle_y;
    QDoubleSpinBox *angle_z;
    QLabel *position_3;
    QDoubleSpinBox *fov;
    QLabel *ambient_light;
    QLabel *ambient_light_2;
    QDoubleSpinBox *ambient;
    QComboBox *filter;

    void setupUi(QDialog *EditScene)
    {
        if (EditScene->objectName().isEmpty())
            EditScene->setObjectName(QStringLiteral("EditScene"));
        EditScene->resize(867, 853);
        save_scene = new QPushButton(EditScene);
        save_scene->setObjectName(QStringLiteral("save_scene"));
        save_scene->setGeometry(QRect(710, 770, 131, 61));
        preview = new QPushButton(EditScene);
        preview->setObjectName(QStringLiteral("preview"));
        preview->setGeometry(QRect(360, 670, 181, 81));
        add_object = new QPushButton(EditScene);
        add_object->setObjectName(QStringLiteral("add_object"));
        add_object->setGeometry(QRect(30, 30, 101, 61));
        object_list = new QListWidget(EditScene);
        object_list->setObjectName(QStringLiteral("object_list"));
        object_list->setGeometry(QRect(20, 100, 256, 541));
        add_light = new QPushButton(EditScene);
        add_light->setObjectName(QStringLiteral("add_light"));
        add_light->setGeometry(QRect(160, 30, 101, 61));
        groupBox = new QGroupBox(EditScene);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(560, 320, 281, 321));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignCenter);
        pos_z = new QDoubleSpinBox(groupBox);
        pos_z->setObjectName(QStringLiteral("pos_z"));
        pos_z->setGeometry(QRect(190, 90, 67, 24));
        QFont font1;
        font1.setPointSize(14);
        pos_z->setFont(font1);
        pos_z->setMinimum(-9999);
        pos_z->setMaximum(9999);
        position = new QLabel(groupBox);
        position->setObjectName(QStringLiteral("position"));
        position->setGeometry(QRect(100, 50, 81, 31));
        QFont font2;
        font2.setPointSize(22);
        position->setFont(font2);
        pos_x = new QDoubleSpinBox(groupBox);
        pos_x->setObjectName(QStringLiteral("pos_x"));
        pos_x->setGeometry(QRect(30, 90, 67, 24));
        pos_x->setFont(font1);
        pos_x->setMinimum(-9999);
        pos_x->setMaximum(9999);
        pos_y = new QDoubleSpinBox(groupBox);
        pos_y->setObjectName(QStringLiteral("pos_y"));
        pos_y->setGeometry(QRect(110, 90, 67, 24));
        pos_y->setFont(font1);
        pos_y->setMinimum(-9999);
        pos_y->setMaximum(9999);
        pos_y->setValue(20);
        position_2 = new QLabel(groupBox);
        position_2->setObjectName(QStringLiteral("position_2"));
        position_2->setGeometry(QRect(110, 140, 61, 31));
        position_2->setFont(font2);
        angle_x = new QDoubleSpinBox(groupBox);
        angle_x->setObjectName(QStringLiteral("angle_x"));
        angle_x->setGeometry(QRect(30, 180, 67, 24));
        angle_x->setFont(font1);
        angle_x->setMinimum(-9999);
        angle_x->setMaximum(9999);
        angle_y = new QDoubleSpinBox(groupBox);
        angle_y->setObjectName(QStringLiteral("angle_y"));
        angle_y->setGeometry(QRect(110, 180, 67, 24));
        angle_y->setFont(font1);
        angle_y->setMinimum(-9999);
        angle_y->setMaximum(9999);
        angle_z = new QDoubleSpinBox(groupBox);
        angle_z->setObjectName(QStringLiteral("angle_z"));
        angle_z->setGeometry(QRect(190, 180, 67, 24));
        angle_z->setFont(font1);
        angle_z->setMinimum(-9999);
        angle_z->setMaximum(9999);
        position_3 = new QLabel(groupBox);
        position_3->setObjectName(QStringLiteral("position_3"));
        position_3->setGeometry(QRect(120, 230, 41, 31));
        position_3->setFont(font2);
        fov = new QDoubleSpinBox(groupBox);
        fov->setObjectName(QStringLiteral("fov"));
        fov->setGeometry(QRect(110, 270, 67, 24));
        fov->setFont(font1);
        fov->setMinimum(-9999);
        fov->setMaximum(9999);
        fov->setValue(70);
        ambient_light = new QLabel(EditScene);
        ambient_light->setObjectName(QStringLiteral("ambient_light"));
        ambient_light->setGeometry(QRect(630, 130, 141, 31));
        ambient_light->setFont(font2);
        ambient_light_2 = new QLabel(EditScene);
        ambient_light_2->setObjectName(QStringLiteral("ambient_light_2"));
        ambient_light_2->setGeometry(QRect(650, 210, 111, 31));
        ambient_light_2->setFont(font2);
        ambient = new QDoubleSpinBox(EditScene);
        ambient->setObjectName(QStringLiteral("ambient"));
        ambient->setGeometry(QRect(670, 170, 67, 24));
        ambient->setFont(font1);
        ambient->setMinimum(-9999);
        ambient->setMaximum(9999);
        ambient->setValue(0.6);
        filter = new QComboBox(EditScene);
        filter->setObjectName(QStringLiteral("filter"));
        filter->setGeometry(QRect(650, 250, 104, 26));

        retranslateUi(EditScene);

        QMetaObject::connectSlotsByName(EditScene);
    } // setupUi

    void retranslateUi(QDialog *EditScene)
    {
        EditScene->setWindowTitle(QApplication::translate("EditScene", "Dialog", 0));
        save_scene->setText(QApplication::translate("EditScene", "Save and quit", 0));
        preview->setText(QApplication::translate("EditScene", "Preview (low quality)", 0));
        add_object->setText(QApplication::translate("EditScene", "Add Object", 0));
        add_light->setText(QApplication::translate("EditScene", "Add Light", 0));
        groupBox->setTitle(QApplication::translate("EditScene", "Camera", 0));
        position->setText(QApplication::translate("EditScene", "Position", 0));
        position_2->setText(QApplication::translate("EditScene", "Angle", 0));
        position_3->setText(QApplication::translate("EditScene", "FOV", 0));
        ambient_light->setText(QApplication::translate("EditScene", "Ambient Light", 0));
        ambient_light_2->setText(QApplication::translate("EditScene", "Color Filter", 0));
        filter->clear();
        filter->insertItems(0, QStringList()
         << QApplication::translate("EditScene", "No filter", 0)
         << QApplication::translate("EditScene", "Sepia", 0)
         << QApplication::translate("EditScene", "Black & White", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class EditScene: public Ui_EditScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSCENE_H
