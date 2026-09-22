/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
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
    QRadioButton *sha1_radioButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1409, 652);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        md5_radioButton = new QRadioButton(centralwidget);
        md5_radioButton->setObjectName(QString::fromUtf8("md5_radioButton"));
        md5_radioButton->setGeometry(QRect(50, 240, 110, 23));
        fileLineEdit = new QLineEdit(centralwidget);
        fileLineEdit->setObjectName(QString::fromUtf8("fileLineEdit"));
        fileLineEdit->setGeometry(QRect(30, 20, 581, 31));
        hashResultLineEdit = new QLineEdit(centralwidget);
        hashResultLineEdit->setObjectName(QString::fromUtf8("hashResultLineEdit"));
        hashResultLineEdit->setGeometry(QRect(30, 70, 1061, 41));
        verifyLineEdit = new QLineEdit(centralwidget);
        verifyLineEdit->setObjectName(QString::fromUtf8("verifyLineEdit"));
        verifyLineEdit->setGeometry(QRect(36, 130, 1201, 25));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(40, 170, 1071, 25));
        progressBar->setMaximumSize(QSize(16777212, 16777212));
        progressBar->setValue(0);
        filePushButton = new QPushButton(centralwidget);
        filePushButton->setObjectName(QString::fromUtf8("filePushButton"));
        filePushButton->setGeometry(QRect(628, 24, 161, 25));
        hashPushButton = new QPushButton(centralwidget);
        hashPushButton->setObjectName(QString::fromUtf8("hashPushButton"));
        hashPushButton->setGeometry(QRect(822, 23, 111, 25));
        comparePushButton = new QPushButton(centralwidget);
        comparePushButton->setObjectName(QString::fromUtf8("comparePushButton"));
        comparePushButton->setGeometry(QRect(949, 21, 111, 25));
        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(1073, 20, 89, 25));
        sha1_radioButton = new QRadioButton(centralwidget);
        sha1_radioButton->setObjectName(QString::fromUtf8("sha1_radioButton"));
        sha1_radioButton->setGeometry(QRect(60, 290, 110, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1409, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        md5_radioButton->setText(QCoreApplication::translate("MainWindow", "md5 (legacy)", nullptr));
        filePushButton->setText(QCoreApplication::translate("MainWindow", "Choose a file to hash", nullptr));
        hashPushButton->setText(QCoreApplication::translate("MainWindow", "Compute hash", nullptr));
        comparePushButton->setText(QCoreApplication::translate("MainWindow", "Compare hash", nullptr));
        cancelButton->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        sha1_radioButton->setText(QCoreApplication::translate("MainWindow", "sha1 (legacy)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
