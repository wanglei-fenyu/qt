/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Sip;
    QLabel *label_2;
    QLineEdit *Sport;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTextEdit *recorb;
    QLabel *label_4;
    QTextEdit *msg;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *send;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QStringLiteral("Client"));
        Client->resize(390, 576);
        verticalLayout_4 = new QVBoxLayout(Client);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(Client);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Sip = new QLineEdit(widget);
        Sip->setObjectName(QStringLiteral("Sip"));

        horizontalLayout->addWidget(Sip);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        Sport = new QLineEdit(widget);
        Sport->setObjectName(QStringLiteral("Sport"));

        horizontalLayout->addWidget(Sport);


        verticalLayout->addWidget(widget);


        verticalLayout_4->addLayout(verticalLayout);

        widget_2 = new QWidget(Client);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        recorb = new QTextEdit(widget_3);
        recorb->setObjectName(QStringLiteral("recorb"));

        verticalLayout_2->addWidget(recorb);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        msg = new QTextEdit(widget_3);
        msg->setObjectName(QStringLiteral("msg"));

        verticalLayout_2->addWidget(msg);


        verticalLayout_3->addWidget(widget_3);


        verticalLayout_4->addWidget(widget_2);

        widget_4 = new QWidget(Client);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        send = new QPushButton(widget_4);
        send->setObjectName(QStringLiteral("send"));

        horizontalLayout_2->addWidget(send);

        horizontalSpacer = new QSpacerItem(265, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(widget_4);


        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QApplication::translate("Client", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Client", "IP", Q_NULLPTR));
        label_2->setText(QApplication::translate("Client", "Port", Q_NULLPTR));
        label_3->setText(QApplication::translate("Client", "\350\201\212\345\244\251\350\256\260\345\275\225", Q_NULLPTR));
        label_4->setText(QApplication::translate("Client", "\350\276\223\345\205\245", Q_NULLPTR));
        send->setText(QApplication::translate("Client", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
