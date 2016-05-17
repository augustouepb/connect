/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QAction *actionSair;
    QAction *actionHelp;
    QAction *actionModule_Bluetooth;
    QAction *actionAntidote;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidgetDisplays;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *labelStatusConnection;
    QLabel *labelDeviceConnected;
    QTextEdit *textEditMeasures;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonClear;
    QWidget *tab_6;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkDeviceConfigurations;
    QCheckBox *checkDeviceAttributes;
    QCheckBox *checkShowXML;
    QWidget *tab;
    QVBoxLayout *verticalLayout_8;
    QListWidget *listWidgetData;
    QPlainTextEdit *plainTextEditData;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacerData;
    QPushButton *pushButtonGoBack;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelBusy;
    QLabel *labelScanning;
    QSpacerItem *horizontalSpacer;
    QListWidget *listOfFoundDevices;
    QCheckBox *checkBox_hdp_devices;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonScan;
    QPushButton *pushButtonPair;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelBusyStatus;
    QLabel *labelStatus;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *listOfPairedDevices;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QStringLiteral("Interface"));
        Interface->setWindowModality(Qt::WindowModal);
        Interface->setEnabled(true);
        Interface->resize(804, 518);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Interface->sizePolicy().hasHeightForWidth());
        Interface->setSizePolicy(sizePolicy);
        Interface->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon-nutes.png"), QSize(), QIcon::Normal, QIcon::Off);
        Interface->setWindowIcon(icon);
        Interface->setAutoFillBackground(false);
        Interface->setStyleSheet(QLatin1String("Status\n"
""));
        actionSair = new QAction(Interface);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon1);
        actionHelp = new QAction(Interface);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/Torchlight_help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon2);
        actionModule_Bluetooth = new QAction(Interface);
        actionModule_Bluetooth->setObjectName(QStringLiteral("actionModule_Bluetooth"));
        actionModule_Bluetooth->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icon-bluetooth.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionModule_Bluetooth->setIcon(icon3);
        actionAntidote = new QAction(Interface);
        actionAntidote->setObjectName(QStringLiteral("actionAntidote"));
        actionAntidote->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/icon-signove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAntidote->setIcon(icon4);
        actionAntidote->setVisible(true);
        centralwidget = new QWidget(Interface);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(400, 0));
        groupBox->setStyleSheet(QLatin1String("\n"
"\n"
"QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 9px;\n"
"    margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}\n"
"\n"
""));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidgetDisplays = new QTabWidget(groupBox);
        tabWidgetDisplays->setObjectName(QStringLiteral("tabWidgetDisplays"));
        tabWidgetDisplays->setTabPosition(QTabWidget::North);
        tabWidgetDisplays->setTabShape(QTabWidget::Rounded);
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_5 = new QVBoxLayout(tab_5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelStatusConnection = new QLabel(tab_5);
        labelStatusConnection->setObjectName(QStringLiteral("labelStatusConnection"));
        QFont font;
        font.setPointSize(20);
        labelStatusConnection->setFont(font);
        labelStatusConnection->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelStatusConnection);

        labelDeviceConnected = new QLabel(tab_5);
        labelDeviceConnected->setObjectName(QStringLiteral("labelDeviceConnected"));
        labelDeviceConnected->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelDeviceConnected);


        verticalLayout_5->addLayout(verticalLayout);

        textEditMeasures = new QTextEdit(tab_5);
        textEditMeasures->setObjectName(QStringLiteral("textEditMeasures"));
        textEditMeasures->setReadOnly(true);

        verticalLayout_5->addWidget(textEditMeasures);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButtonSave = new QPushButton(tab_5);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        horizontalLayout_5->addWidget(pushButtonSave);

        pushButtonClear = new QPushButton(tab_5);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));

        horizontalLayout_5->addWidget(pushButtonClear);


        verticalLayout_5->addLayout(horizontalLayout_5);

        tabWidgetDisplays->addTab(tab_5, QString());
        textEditMeasures->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        layoutWidget = new QWidget(tab_6);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 371, 120));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_7->addWidget(label);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        checkDeviceConfigurations = new QCheckBox(layoutWidget);
        checkDeviceConfigurations->setObjectName(QStringLiteral("checkDeviceConfigurations"));

        verticalLayout_6->addWidget(checkDeviceConfigurations);

        checkDeviceAttributes = new QCheckBox(layoutWidget);
        checkDeviceAttributes->setObjectName(QStringLiteral("checkDeviceAttributes"));
        checkDeviceAttributes->setChecked(true);

        verticalLayout_6->addWidget(checkDeviceAttributes);

        checkShowXML = new QCheckBox(layoutWidget);
        checkShowXML->setObjectName(QStringLiteral("checkShowXML"));

        verticalLayout_6->addWidget(checkShowXML);


        verticalLayout_7->addLayout(verticalLayout_6);

        tabWidgetDisplays->addTab(tab_6, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_8 = new QVBoxLayout(tab);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        listWidgetData = new QListWidget(tab);
        listWidgetData->setObjectName(QStringLiteral("listWidgetData"));

        verticalLayout_8->addWidget(listWidgetData);

        plainTextEditData = new QPlainTextEdit(tab);
        plainTextEditData->setObjectName(QStringLiteral("plainTextEditData"));

        verticalLayout_8->addWidget(plainTextEditData);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacerData = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacerData);

        pushButtonGoBack = new QPushButton(tab);
        pushButtonGoBack->setObjectName(QStringLiteral("pushButtonGoBack"));

        horizontalLayout_7->addWidget(pushButtonGoBack);


        verticalLayout_8->addLayout(horizontalLayout_7);

        tabWidgetDisplays->addTab(tab, QString());

        horizontalLayout->addWidget(tabWidgetDisplays);


        verticalLayout_2->addLayout(horizontalLayout);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QLatin1String("\n"
"\n"
"QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 9px;\n"
"    margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}\n"
"\n"
""));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelBusy = new QLabel(groupBox_2);
        labelBusy->setObjectName(QStringLiteral("labelBusy"));
        labelBusy->setText(QStringLiteral("Mv"));

        horizontalLayout_3->addWidget(labelBusy);

        labelScanning = new QLabel(groupBox_2);
        labelScanning->setObjectName(QStringLiteral("labelScanning"));

        horizontalLayout_3->addWidget(labelScanning);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);

        listOfFoundDevices = new QListWidget(groupBox_2);
        listOfFoundDevices->setObjectName(QStringLiteral("listOfFoundDevices"));

        verticalLayout_3->addWidget(listOfFoundDevices);

        checkBox_hdp_devices = new QCheckBox(groupBox_2);
        checkBox_hdp_devices->setObjectName(QStringLiteral("checkBox_hdp_devices"));

        verticalLayout_3->addWidget(checkBox_hdp_devices);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButtonScan = new QPushButton(groupBox_2);
        pushButtonScan->setObjectName(QStringLiteral("pushButtonScan"));

        horizontalLayout_4->addWidget(pushButtonScan);

        pushButtonPair = new QPushButton(groupBox_2);
        pushButtonPair->setObjectName(QStringLiteral("pushButtonPair"));

        horizontalLayout_4->addWidget(pushButtonPair);


        verticalLayout_3->addLayout(horizontalLayout_4);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QLatin1String("\n"
"\n"
"QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 9px;\n"
"    margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelBusyStatus = new QLabel(groupBox_3);
        labelBusyStatus->setObjectName(QStringLiteral("labelBusyStatus"));
        labelBusyStatus->setText(QStringLiteral(""));

        horizontalLayout_6->addWidget(labelBusyStatus);

        labelStatus = new QLabel(groupBox_3);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));
        labelStatus->setEnabled(true);

        horizontalLayout_6->addWidget(labelStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_6);

        listOfPairedDevices = new QListWidget(groupBox_3);
        listOfPairedDevices->setObjectName(QStringLiteral("listOfPairedDevices"));

        verticalLayout_4->addWidget(listOfPairedDevices);

        splitter->addWidget(groupBox_3);

        horizontalLayout_2->addWidget(splitter);

        Interface->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Interface);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Interface->setStatusBar(statusbar);
        menuBar = new QMenuBar(Interface);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 804, 25));
        Interface->setMenuBar(menuBar);
        toolBar = new QToolBar(Interface);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setWindowTitle(QStringLiteral("toolBar"));
        Interface->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionModule_Bluetooth);
        toolBar->addSeparator();
        toolBar->addAction(actionAntidote);
        toolBar->addSeparator();
        toolBar->addAction(actionHelp);
        toolBar->addAction(actionSair);

        retranslateUi(Interface);
        QObject::connect(pushButtonClear, SIGNAL(clicked()), textEditMeasures, SLOT(clear()));

        tabWidgetDisplays->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QMainWindow *Interface)
    {
        Interface->setWindowTitle(QApplication::translate("Interface", "Conectividade", 0));
        actionSair->setText(QApplication::translate("Interface", "Exit", 0));
        actionHelp->setText(QApplication::translate("Interface", "Help", 0));
        actionModule_Bluetooth->setText(QApplication::translate("Interface", "Module_Bluetooth", 0));
        actionAntidote->setText(QApplication::translate("Interface", "Disconnected Antidote", 0));
        groupBox->setTitle(QApplication::translate("Interface", "Measures", 0));
        labelStatusConnection->setText(QApplication::translate("Interface", "Disconnected", 0));
        labelDeviceConnected->setText(QApplication::translate("Interface", "No device connected", 0));
        pushButtonSave->setText(QApplication::translate("Interface", "Save", 0));
        pushButtonClear->setText(QApplication::translate("Interface", "Clear", 0));
        tabWidgetDisplays->setTabText(tabWidgetDisplays->indexOf(tab_5), QApplication::translate("Interface", "Measurements", 0));
        label->setText(QApplication::translate("Interface", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Setting The Informations Received</span></p></body></html>", 0));
        checkDeviceConfigurations->setText(QApplication::translate("Interface", "Device Configurations", 0));
        checkDeviceAttributes->setText(QApplication::translate("Interface", "Device Attributes", 0));
        checkShowXML->setText(QApplication::translate("Interface", "Show XML", 0));
        tabWidgetDisplays->setTabText(tabWidgetDisplays->indexOf(tab_6), QApplication::translate("Interface", "Configurations", 0));
        pushButtonGoBack->setText(QApplication::translate("Interface", "Go back", 0));
        tabWidgetDisplays->setTabText(tabWidgetDisplays->indexOf(tab), QApplication::translate("Interface", "Saved Data", 0));
        groupBox_2->setTitle(QApplication::translate("Interface", "Search Devices", 0));
        labelScanning->setText(QApplication::translate("Interface", "Scanning...", 0));
        checkBox_hdp_devices->setText(QApplication::translate("Interface", "HDP Devices", 0));
        pushButtonScan->setText(QApplication::translate("Interface", "Scan", 0));
        pushButtonPair->setText(QApplication::translate("Interface", "Pair", 0));
        groupBox_3->setTitle(QApplication::translate("Interface", "Paired Devices", 0));
        labelStatus->setText(QApplication::translate("Interface", "Checking status...", 0));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
