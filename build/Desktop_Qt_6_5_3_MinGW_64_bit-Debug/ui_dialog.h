/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QSpinBox *spinBox_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QSpinBox *spinBox;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QSpinBox *spinBox_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_6;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_7;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_3;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget9;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1045, 652);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(340, 490, 341, 151));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(170, 40, 108, 27));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMinimum(10);
        spinBox_2->setMaximum(250);

        gridLayout_2->addWidget(spinBox_2, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 40, 108, 31));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        spinBox = new QSpinBox(layoutWidget1);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(10);
        spinBox->setMaximum(500);

        gridLayout->addWidget(spinBox, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(120, 80, 91, 27));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        spinBox_3 = new QSpinBox(layoutWidget2);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setMinimum(10);
        spinBox_3->setMaximum(250);

        gridLayout_3->addWidget(spinBox_3, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(120, 120, 101, 25));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(230, 120, 101, 25));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 120, 105, 25));
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(710, 470, 311, 171));
        layoutWidget3 = new QWidget(groupBox_2);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(50, 30, 198, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(layoutWidget3);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout->addWidget(pushButton_6);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName("label_8");

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget3);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setMinimum(0.100000000000000);

        gridLayout_4->addWidget(doubleSpinBox, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_4);

        layoutWidget4 = new QWidget(groupBox_2);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(50, 100, 201, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget4);
        pushButton_7->setObjectName("pushButton_7");

        horizontalLayout_2->addWidget(pushButton_7);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName("label_9");

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget4);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setMinimum(0.100000000000000);

        gridLayout_5->addWidget(doubleSpinBox_2, 0, 1, 1, 1);

        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName("label_10");

        gridLayout_5->addWidget(label_10, 1, 0, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(layoutWidget4);
        doubleSpinBox_3->setObjectName("doubleSpinBox_3");
        doubleSpinBox_3->setMinimum(0.100000000000000);

        gridLayout_5->addWidget(doubleSpinBox_3, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_5);

        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(20, 490, 311, 151));
        layoutWidget5 = new QWidget(groupBox_3);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(30, 50, 81, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget5);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget5);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_3->addWidget(lineEdit);

        layoutWidget6 = new QWidget(groupBox_3);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(210, 54, 82, 59));
        verticalLayout = new QVBoxLayout(layoutWidget6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget6);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget6);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        layoutWidget7 = new QWidget(groupBox_3);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(30, 94, 81, 26));
        gridLayout_6 = new QGridLayout(layoutWidget7);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget7);
        label_2->setObjectName("label_2");

        gridLayout_6->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget7);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout_6->addWidget(lineEdit_2, 0, 1, 1, 1);

        layoutWidget8 = new QWidget(groupBox_3);
        layoutWidget8->setObjectName("layoutWidget8");
        layoutWidget8->setGeometry(QRect(120, 54, 81, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget8);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        lineEdit_4 = new QLineEdit(layoutWidget8);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_4->addWidget(lineEdit_4);

        layoutWidget9 = new QWidget(groupBox_3);
        layoutWidget9->setObjectName("layoutWidget9");
        layoutWidget9->setGeometry(QRect(120, 94, 81, 26));
        gridLayout_7 = new QGridLayout(layoutWidget9);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget9);
        label_4->setObjectName("label_4");

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget9);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout_7->addWidget(lineEdit_3, 0, 1, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Circulo", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "centro y", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "centro x", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "radio", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "Circulos polares", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "Alternativa", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Circulo Pitagoras", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "Espital", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "Espiral 1", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "Factor", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialog", "Espiral 2", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "theta", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "radio", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Dialog", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "X1", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "linea DDA", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Color", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Y1", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "X2", nullptr));
        lineEdit_4->setText(QString());
        label_4->setText(QCoreApplication::translate("Dialog", "Y2", nullptr));
        lineEdit_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
