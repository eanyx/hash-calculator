/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QRadioButton *md5_radioButton;
    QLineEdit *fileLineEdit;
    QLineEdit *hashResultLineEdit;
    QLineEdit *verifyLineEdit;
    QProgressBar *progressBar;
    QPushButton *filePushButton;
    QPushButton *hashPushButton;
    QPushButton *comparePushButton;
    QPushButton *cancelButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        md5_radioButton = new QRadioButton(centralwidget);
        md5_radioButton->setObjectName("md5_radioButton");
        md5_radioButton->setGeometry(QRect(120, 370, 110, 23));
        fileLineEdit = new QLineEdit(centralwidget);
        fileLineEdit->setObjectName("fileLineEdit");
        fileLineEdit->setGeometry(QRect(20, 80, 581, 31));
        hashResultLineEdit = new QLineEdit(centralwidget);
        hashResultLineEdit->setObjectName("hashResultLineEdit");
        hashResultLineEdit->setGeometry(QRect(-450, 130, 1061, 41));
        verifyLineEdit = new QLineEdit(centralwidget);
        verifyLineEdit->setObjectName("verifyLineEdit");
        verifyLineEdit->setGeometry(QRect(220, 220, 1201, 25));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(250, 270, 1071, 25));
        progressBar->setMaximumSize(QSize(16777212, 16777212));
        progressBar->setValue(0);
        filePushButton = new QPushButton(centralwidget);
        filePushButton->setObjectName("filePushButton");
        filePushButton->setGeometry(QRect(600, 80, 161, 25));
        hashPushButton = new QPushButton(centralwidget);
        hashPushButton->setObjectName("hashPushButton");
        hashPushButton->setGeometry(QRect(660, 130, 111, 25));
        comparePushButton = new QPushButton(centralwidget);
        comparePushButton->setObjectName("comparePushButton");
        comparePushButton->setGeometry(QRect(670, 170, 111, 25));
        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(690, 330, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        md5_radioButton->setText(QCoreApplication::translate("MainWindow", "md5", nullptr));
        filePushButton->setText(QCoreApplication::translate("MainWindow", "Choose a file to hash", nullptr));
        hashPushButton->setText(QCoreApplication::translate("MainWindow", "Compute hash", nullptr));
        comparePushButton->setText(QCoreApplication::translate("MainWindow", "Compare hash", nullptr));
        cancelButton->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
