/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QCommandLinkButton *commandLinkButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon-nutes.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginDialog->setWindowIcon(icon);
        groupBox = new QGroupBox(LoginDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 83, 221, 143));
        groupBox->setStyleSheet(QLatin1String("QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"	font: 31 14px;\n"
"}"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);

        verticalLayout->addWidget(label_3);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout->addWidget(comboBox_2);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setInputMethodHints(Qt::ImhHiddenText);

        verticalLayout->addWidget(lineEdit_3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit_4->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_3->raise();
        label_5->raise();
        lineEdit_4->raise();
        label_3->raise();
        comboBox_2->raise();
        label_7 = new QLabel(LoginDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 11, 211, 41));
        QFont font;
        font.setPointSize(20);
        label_7->setFont(font);
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(245, 115, 130, 40));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/cb_adca21feeca0223cd0e9e1f52900e53e_.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 149, 161, 61));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/marca-nutes.png")));
        label_2->setScaledContents(true);
        layoutWidget = new QWidget(LoginDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 243, 377, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        commandLinkButton = new QCommandLinkButton(layoutWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(commandLinkButton);

        horizontalSpacer = new QSpacerItem(148, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        QWidget::setTabOrder(comboBox_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, pushButton);
        QWidget::setTabOrder(pushButton, commandLinkButton);
        QWidget::setTabOrder(commandLinkButton, pushButton_2);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Conectividade", 0));
        groupBox->setTitle(QApplication::translate("LoginDialog", "Please, select user:", 0));
        label_3->setText(QApplication::translate("LoginDialog", "Username:", 0));
        label_5->setText(QApplication::translate("LoginDialog", "\341\271\224assword:", 0));
        lineEdit_4->setInputMask(QString());
        label_7->setText(QApplication::translate("LoginDialog", "CONECTIVIDADE", 0));
        label->setText(QString());
        label_2->setText(QString());
        commandLinkButton->setText(QApplication::translate("LoginDialog", "Sign Up", 0));
        pushButton->setText(QApplication::translate("LoginDialog", "Login", 0));
        pushButton_2->setText(QApplication::translate("LoginDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
