/********************************************************************************
** Form generated from reading UI file 'selectobject.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTOBJECT_H
#define UI_SELECTOBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SelectObject
{
public:
    QListWidget *object_list;
    QLabel *label;
    QPushButton *b_select;

    void setupUi(QDialog *SelectObject)
    {
        if (SelectObject->objectName().isEmpty())
            SelectObject->setObjectName(QStringLiteral("SelectObject"));
        SelectObject->resize(400, 331);
        object_list = new QListWidget(SelectObject);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(object_list);
        __qlistwidgetitem->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem->setFont(font);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(object_list);
        __qlistwidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem1->setFont(font);
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStyleStrategy(QFont::PreferDefault);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(object_list);
        __qlistwidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem2->setFont(font1);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(object_list);
        __qlistwidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem3->setFont(font);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(object_list);
        __qlistwidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem4->setFont(font);
        object_list->setObjectName(QStringLiteral("object_list"));
        object_list->setGeometry(QRect(70, 60, 256, 141));
        label = new QLabel(SelectObject);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 161, 31));
        QFont font2;
        font2.setPointSize(18);
        label->setFont(font2);
        b_select = new QPushButton(SelectObject);
        b_select->setObjectName(QStringLiteral("b_select"));
        b_select->setGeometry(QRect(140, 240, 113, 41));

        retranslateUi(SelectObject);

        QMetaObject::connectSlotsByName(SelectObject);
    } // setupUi

    void retranslateUi(QDialog *SelectObject)
    {
        SelectObject->setWindowTitle(QApplication::translate("SelectObject", "Dialog", 0));

        const bool __sortingEnabled = object_list->isSortingEnabled();
        object_list->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = object_list->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("SelectObject", "Sphere", 0));
        QListWidgetItem *___qlistwidgetitem1 = object_list->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("SelectObject", "Plane", 0));
        QListWidgetItem *___qlistwidgetitem2 = object_list->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("SelectObject", "Cylinder", 0));
        QListWidgetItem *___qlistwidgetitem3 = object_list->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("SelectObject", "Cone", 0));
        QListWidgetItem *___qlistwidgetitem4 = object_list->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("SelectObject", "Tore", 0));
        object_list->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("SelectObject", "Select object type", 0));
        b_select->setText(QApplication::translate("SelectObject", "Select", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectObject: public Ui_SelectObject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTOBJECT_H
