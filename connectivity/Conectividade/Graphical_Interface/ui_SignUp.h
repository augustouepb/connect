/********************************************************************************
** Form generated from reading UI file 'SignUp.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_12;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditName;
    QLabel *label_6;
    QLineEdit *lineEditUsername;
    QLabel *label_8;
    QLineEdit *lineEditPassword;
    QLabel *label_9;
    QLineEdit *lineEditConfirmPassword;
    QLabel *label_4;
    QLineEdit *lineEditEmail;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QComboBox *comboBox;
    QLineEdit *lineEditOtherID;
    QLineEdit *lineEditID;
    QLabel *label_3;
    QLineEdit *lineEditCodPhone;
    QLineEdit *lineEditPhone;
    QHBoxLayout *PhoneLayout;
    QLabel *label_10;
    QRadioButton *radioButtonMale;
    QRadioButton *radioButtonFemale;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QSpinBox *spinBoxDayBDay;
    QComboBox *comboBoxMonthBDay;
    QSpinBox *spinBoxYearBDay;
    QLabel *label_2;
    QLineEdit *lineEditAddress;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLineEdit *lineEditCity;
    QLabel *label_11;
    QLineEdit *lineEditZipCode;
    QLabel *label_14;
    QLineEdit *lineEditState;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButtonRegister;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QStringLiteral("SignUp"));
        SignUp->resize(567, 546);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon-nutes.png"), QSize(), QIcon::Normal, QIcon::Off);
        SignUp->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(SignUp);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_12 = new QLabel(SignUp);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_12);

        frame = new QFrame(SignUp);
        frame->setObjectName(QStringLiteral("frame"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        frame->setFont(font1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(3);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        lineEditName = new QLineEdit(frame);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setMinimumSize(QSize(350, 0));

        verticalLayout->addWidget(lineEditName);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_6);

        lineEditUsername = new QLineEdit(frame);
        lineEditUsername->setObjectName(QStringLiteral("lineEditUsername"));
        lineEditUsername->setMinimumSize(QSize(350, 0));

        verticalLayout->addWidget(lineEditUsername);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_8);

        lineEditPassword = new QLineEdit(frame);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setMinimumSize(QSize(350, 0));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditPassword);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 0));
        label_9->setMaximumSize(QSize(888888, 42));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_9);

        lineEditConfirmPassword = new QLineEdit(frame);
        lineEditConfirmPassword->setObjectName(QStringLiteral("lineEditConfirmPassword"));
        lineEditConfirmPassword->setMinimumSize(QSize(350, 0));
        lineEditConfirmPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditConfirmPassword);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);

        lineEditEmail = new QLineEdit(frame);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));
        lineEditEmail->setMinimumSize(QSize(350, 0));

        verticalLayout->addWidget(lineEditEmail);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_7);

        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEditable(false);

        horizontalLayout_2->addWidget(comboBox);

        lineEditOtherID = new QLineEdit(frame);
        lineEditOtherID->setObjectName(QStringLiteral("lineEditOtherID"));

        horizontalLayout_2->addWidget(lineEditOtherID);

        lineEditID = new QLineEdit(frame);
        lineEditID->setObjectName(QStringLiteral("lineEditID"));
        lineEditID->setMinimumSize(QSize(0, 0));
        lineEditID->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_2->addWidget(lineEditID);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        lineEditCodPhone = new QLineEdit(frame);
        lineEditCodPhone->setObjectName(QStringLiteral("lineEditCodPhone"));
        lineEditCodPhone->setMinimumSize(QSize(40, 0));
        lineEditCodPhone->setMaximumSize(QSize(40, 16777215));
        lineEditCodPhone->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEditCodPhone->setMaxLength(3);

        horizontalLayout_2->addWidget(lineEditCodPhone);

        lineEditPhone = new QLineEdit(frame);
        lineEditPhone->setObjectName(QStringLiteral("lineEditPhone"));
        lineEditPhone->setMinimumSize(QSize(100, 0));
        lineEditPhone->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEditPhone->setMaxLength(10);

        horizontalLayout_2->addWidget(lineEditPhone);


        verticalLayout->addLayout(horizontalLayout_2);

        PhoneLayout = new QHBoxLayout();
        PhoneLayout->setObjectName(QStringLiteral("PhoneLayout"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));

        PhoneLayout->addWidget(label_10);

        radioButtonMale = new QRadioButton(frame);
        radioButtonMale->setObjectName(QStringLiteral("radioButtonMale"));

        PhoneLayout->addWidget(radioButtonMale);

        radioButtonFemale = new QRadioButton(frame);
        radioButtonFemale->setObjectName(QStringLiteral("radioButtonFemale"));

        PhoneLayout->addWidget(radioButtonFemale);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        PhoneLayout->addItem(horizontalSpacer_2);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        PhoneLayout->addWidget(label_5);

        spinBoxDayBDay = new QSpinBox(frame);
        spinBoxDayBDay->setObjectName(QStringLiteral("spinBoxDayBDay"));
        spinBoxDayBDay->setMinimum(1);
        spinBoxDayBDay->setMaximum(31);

        PhoneLayout->addWidget(spinBoxDayBDay);

        comboBoxMonthBDay = new QComboBox(frame);
        comboBoxMonthBDay->setObjectName(QStringLiteral("comboBoxMonthBDay"));

        PhoneLayout->addWidget(comboBoxMonthBDay);

        spinBoxYearBDay = new QSpinBox(frame);
        spinBoxYearBDay->setObjectName(QStringLiteral("spinBoxYearBDay"));
        spinBoxYearBDay->setMinimum(1900);
        spinBoxYearBDay->setMaximum(2016);

        PhoneLayout->addWidget(spinBoxYearBDay);


        verticalLayout->addLayout(PhoneLayout);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        lineEditAddress = new QLineEdit(frame);
        lineEditAddress->setObjectName(QStringLiteral("lineEditAddress"));
        lineEditAddress->setMinimumSize(QSize(350, 0));

        verticalLayout->addWidget(lineEditAddress);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_7->addWidget(label_13);

        lineEditCity = new QLineEdit(frame);
        lineEditCity->setObjectName(QStringLiteral("lineEditCity"));

        horizontalLayout_7->addWidget(lineEditCity);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);

        lineEditZipCode = new QLineEdit(frame);
        lineEditZipCode->setObjectName(QStringLiteral("lineEditZipCode"));
        lineEditZipCode->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_7->addWidget(lineEditZipCode);

        label_14 = new QLabel(frame);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_7->addWidget(label_14);

        lineEditState = new QLineEdit(frame);
        lineEditState->setObjectName(QStringLiteral("lineEditState"));

        horizontalLayout_7->addWidget(lineEditState);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(frame);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        pushButtonRegister = new QPushButton(SignUp);
        pushButtonRegister->setObjectName(QStringLiteral("pushButtonRegister"));

        horizontalLayout_5->addWidget(pushButtonRegister);

        pushButtonCancel = new QPushButton(SignUp);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        horizontalLayout_5->addWidget(pushButtonCancel);


        verticalLayout_2->addLayout(horizontalLayout_5);

        QWidget::setTabOrder(lineEditName, lineEditUsername);
        QWidget::setTabOrder(lineEditUsername, lineEditPassword);
        QWidget::setTabOrder(lineEditPassword, lineEditConfirmPassword);
        QWidget::setTabOrder(lineEditConfirmPassword, lineEditEmail);
        QWidget::setTabOrder(lineEditEmail, comboBox);
        QWidget::setTabOrder(comboBox, lineEditOtherID);
        QWidget::setTabOrder(lineEditOtherID, lineEditID);
        QWidget::setTabOrder(lineEditID, lineEditCodPhone);
        QWidget::setTabOrder(lineEditCodPhone, lineEditPhone);
        QWidget::setTabOrder(lineEditPhone, radioButtonMale);
        QWidget::setTabOrder(radioButtonMale, radioButtonFemale);
        QWidget::setTabOrder(radioButtonFemale, spinBoxDayBDay);
        QWidget::setTabOrder(spinBoxDayBDay, comboBoxMonthBDay);
        QWidget::setTabOrder(comboBoxMonthBDay, spinBoxYearBDay);
        QWidget::setTabOrder(spinBoxYearBDay, lineEditAddress);
        QWidget::setTabOrder(lineEditAddress, lineEditCity);
        QWidget::setTabOrder(lineEditCity, lineEditZipCode);
        QWidget::setTabOrder(lineEditZipCode, lineEditState);
        QWidget::setTabOrder(lineEditState, pushButtonRegister);
        QWidget::setTabOrder(pushButtonRegister, pushButtonCancel);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "Conectividade", 0));
        label_12->setText(QApplication::translate("SignUp", "Sign Up", 0));
        label->setText(QApplication::translate("SignUp", "Name:", 0));
        label_6->setText(QApplication::translate("SignUp", "Username:", 0));
        label_8->setText(QApplication::translate("SignUp", "Password:", 0));
        label_9->setText(QApplication::translate("SignUp", "Confirm Password:", 0));
        label_4->setText(QApplication::translate("SignUp", "E-Mail:", 0));
        label_7->setText(QApplication::translate("SignUp", "Identification:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("SignUp", "CPF", 0)
         << QApplication::translate("SignUp", "RG", 0)
         << QApplication::translate("SignUp", "CNH", 0)
         << QApplication::translate("SignUp", "ID", 0)
         << QApplication::translate("SignUp", "Passport", 0)
         << QApplication::translate("SignUp", "Other", 0)
        );
        comboBox->setCurrentText(QApplication::translate("SignUp", "CPF", 0));
        label_3->setText(QApplication::translate("SignUp", "Phone:", 0));
        label_10->setText(QApplication::translate("SignUp", "Gender:", 0));
        radioButtonMale->setText(QApplication::translate("SignUp", "Male", 0));
        radioButtonFemale->setText(QApplication::translate("SignUp", "Female", 0));
        label_5->setText(QApplication::translate("SignUp", "Birthday:", 0));
        comboBoxMonthBDay->clear();
        comboBoxMonthBDay->insertItems(0, QStringList()
         << QApplication::translate("SignUp", "Janeiro", 0)
         << QApplication::translate("SignUp", "Fevereiro", 0)
         << QApplication::translate("SignUp", "Mar\303\247o", 0)
         << QApplication::translate("SignUp", "Abril", 0)
         << QApplication::translate("SignUp", "Maio", 0)
         << QApplication::translate("SignUp", "Junho", 0)
         << QApplication::translate("SignUp", "Julho", 0)
         << QApplication::translate("SignUp", "Agosto", 0)
         << QApplication::translate("SignUp", "Setembro", 0)
         << QApplication::translate("SignUp", "Outubro", 0)
         << QApplication::translate("SignUp", "Novembro", 0)
         << QApplication::translate("SignUp", "Dezembro", 0)
        );
        label_2->setText(QApplication::translate("SignUp", "Address:", 0));
        label_13->setText(QApplication::translate("SignUp", "City:", 0));
        label_11->setText(QApplication::translate("SignUp", "Zip Code:", 0));
        label_14->setText(QApplication::translate("SignUp", "State:", 0));
        pushButtonRegister->setText(QApplication::translate("SignUp", "Register", 0));
        pushButtonCancel->setText(QApplication::translate("SignUp", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
