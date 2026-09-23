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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *fileLineEdit;
    QLineEdit *hashResultLineEdit;
    QLineEdit *verifyLineEdit;
    QProgressBar *progressBar;
    QPushButton *filePushButton;
    QPushButton *hashPushButton;
    QPushButton *comparePushButton;
    QPushButton *cancelButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *sha224_radioButton;
    QRadioButton *sha256_radioButton;
    QRadioButton *sha384_radioButton;
    QRadioButton *sha512_radioButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *md5_radioButton;
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
        fileLineEdit = new QLineEdit(centralwidget);
        fileLineEdit->setObjectName(QString::fromUtf8("fileLineEdit"));
        fileLineEdit->setGeometry(QRect(30, 20, 581, 31));
        hashResultLineEdit = new QLineEdit(centralwidget);
        hashResultLineEdit->setObjectName(QString::fromUtf8("hashResultLineEdit"));
        hashResultLineEdit->setGeometry(QRect(31, 64, 1201, 31));
        verifyLineEdit = new QLineEdit(centralwidget);
        verifyLineEdit->setObjectName(QString::fromUtf8("verifyLineEdit"));
        verifyLineEdit->setGeometry(QRect(32, 106, 1201, 31));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(33, 149, 1201, 31));
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
        comparePushButton->setGeometry(QRect(1245, 110, 111, 25));
        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(940, 23, 89, 25));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 215, 76, 112));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sha224_radioButton = new QRadioButton(widget);
        sha224_radioButton->setObjectName(QString::fromUtf8("sha224_radioButton"));

        verticalLayout->addWidget(sha224_radioButton);

        sha256_radioButton = new QRadioButton(widget);
        sha256_radioButton->setObjectName(QString::fromUtf8("sha256_radioButton"));

        verticalLayout->addWidget(sha256_radioButton);

        sha384_radioButton = new QRadioButton(widget);
        sha384_radioButton->setObjectName(QString::fromUtf8("sha384_radioButton"));

        verticalLayout->addWidget(sha384_radioButton);

        sha512_radioButton = new QRadioButton(widget);
        sha512_radioButton->setObjectName(QString::fromUtf8("sha512_radioButton"));

        verticalLayout->addWidget(sha512_radioButton);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 213, 115, 54));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        md5_radioButton = new QRadioButton(widget1);
        md5_radioButton->setObjectName(QString::fromUtf8("md5_radioButton"));

        verticalLayout_2->addWidget(md5_radioButton);

        sha1_radioButton = new QRadioButton(widget1);
        sha1_radioButton->setObjectName(QString::fromUtf8("sha1_radioButton"));

        verticalLayout_2->addWidget(sha1_radioButton);

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
        filePushButton->setText(QCoreApplication::translate("MainWindow", "Choose a file to hash", nullptr));
        hashPushButton->setText(QCoreApplication::translate("MainWindow", "Compute hash", nullptr));
        comparePushButton->setText(QCoreApplication::translate("MainWindow", "Compare hash", nullptr));
        cancelButton->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        sha224_radioButton->setText(QCoreApplication::translate("MainWindow", "Sha224", nullptr));
        sha256_radioButton->setText(QCoreApplication::translate("MainWindow", "Sha256", nullptr));
        sha384_radioButton->setText(QCoreApplication::translate("MainWindow", "Sha384", nullptr));
        sha512_radioButton->setText(QCoreApplication::translate("MainWindow", "Sha512", nullptr));
        md5_radioButton->setText(QCoreApplication::translate("MainWindow", "Md5 (legacy)", nullptr));
        sha1_radioButton->setText(QCoreApplication::translate("MainWindow", "Sha1 (legacy)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
