/********************************************************************************
** Form generated from reading UI file 'loginwithlogo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWITHLOGO_H
#define UI_LOGINWITHLOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginWithLogo
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_3;
    QLabel *status_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginWithLogo)
    {
        if (loginWithLogo->objectName().isEmpty())
            loginWithLogo->setObjectName(QStringLiteral("loginWithLogo"));
        loginWithLogo->resize(533, 471);
        loginWithLogo->setAutoFillBackground(true);
        centralwidget = new QWidget(loginWithLogo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 40, 291, 121));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/Saved Pictures/comboLogo2.png")));
        label_4->setScaledContents(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 200, 291, 211));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(10);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(true);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(10);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        verticalLayout_2->addWidget(lineEdit_username);

        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        verticalLayout_2->addWidget(lineEdit_password);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        pushButton->setFont(font2);

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        status_label = new QLabel(widget);
        status_label->setObjectName(QStringLiteral("status_label"));
        status_label->setEnabled(true);
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        status_label->setFont(font3);

        verticalLayout_4->addWidget(status_label);

        loginWithLogo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginWithLogo);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 533, 17));
        loginWithLogo->setMenuBar(menubar);
        statusbar = new QStatusBar(loginWithLogo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        loginWithLogo->setStatusBar(statusbar);

        retranslateUi(loginWithLogo);

        QMetaObject::connectSlotsByName(loginWithLogo);
    } // setupUi

    void retranslateUi(QMainWindow *loginWithLogo)
    {
        loginWithLogo->setWindowTitle(QApplication::translate("loginWithLogo", "MainWindow", nullptr));
        label_4->setText(QString());
        label->setText(QApplication::translate("loginWithLogo", "<html><head/><body><p>Username:</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("loginWithLogo", "Password:", nullptr));
        pushButton->setText(QApplication::translate("loginWithLogo", "Login", nullptr));
        pushButton_2->setText(QApplication::translate("loginWithLogo", "      Register     ", nullptr));
        pushButton_3->setText(QApplication::translate("loginWithLogo", "Forgot Password?", nullptr));
        status_label->setText(QApplication::translate("loginWithLogo", "[+]Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginWithLogo: public Ui_loginWithLogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWITHLOGO_H
