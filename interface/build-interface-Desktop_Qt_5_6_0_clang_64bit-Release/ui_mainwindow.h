/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *b_render_scene;
    QPushButton *b_new_scene;
    QPushButton *b_edit_scene;
    QProgressBar *scene_load;
    QRadioButton *enable_screenshot;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(560, 454);
        b_render_scene = new QPushButton(MainWindow);
        b_render_scene->setObjectName(QStringLiteral("b_render_scene"));
        b_render_scene->setEnabled(true);
        b_render_scene->setGeometry(QRect(150, 280, 261, 71));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(b_render_scene->sizePolicy().hasHeightForWidth());
        b_render_scene->setSizePolicy(sizePolicy);
        b_render_scene->setAutoDefault(false);
        b_render_scene->setFlat(false);
        b_new_scene = new QPushButton(MainWindow);
        b_new_scene->setObjectName(QStringLiteral("b_new_scene"));
        b_new_scene->setGeometry(QRect(60, 60, 141, 91));
        b_new_scene->setAutoDefault(false);
        b_edit_scene = new QPushButton(MainWindow);
        b_edit_scene->setObjectName(QStringLiteral("b_edit_scene"));
        b_edit_scene->setGeometry(QRect(360, 60, 141, 91));
        b_edit_scene->setAutoDefault(false);
        scene_load = new QProgressBar(MainWindow);
        scene_load->setObjectName(QStringLiteral("scene_load"));
        scene_load->setGeometry(QRect(160, 350, 241, 51));
        scene_load->setValue(24);
        enable_screenshot = new QRadioButton(MainWindow);
        enable_screenshot->setObjectName(QStringLiteral("enable_screenshot"));
        enable_screenshot->setGeometry(QRect(210, 220, 141, 20));

        retranslateUi(MainWindow);

        b_render_scene->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Dialog", 0));
        b_render_scene->setText(QApplication::translate("MainWindow", "Render Scene", 0));
        b_new_scene->setText(QApplication::translate("MainWindow", "Create new scene", 0));
        b_edit_scene->setText(QApplication::translate("MainWindow", "Edit scene", 0));
        enable_screenshot->setText(QApplication::translate("MainWindow", "Take a screenshot", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
