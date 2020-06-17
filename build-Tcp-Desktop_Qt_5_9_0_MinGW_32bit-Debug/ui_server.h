/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

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

class Ui_Server
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *SIp;
    QLabel *label_2;
    QLineEdit *SPort;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QTextEdit *recorb;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QTextEdit *msg;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *send;

    void setupUi(QWidget *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QStringLiteral("Server"));
        Server->resize(412, 536);
        verticalLayout = new QVBoxLayout(Server);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(Server);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        SIp = new QLineEdit(widget);
        SIp->setObjectName(QStringLiteral("SIp"));

        horizontalLayout->addWidget(SIp);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        SPort = new QLineEdit(widget);
        SPort->setObjectName(QStringLiteral("SPort"));

        horizontalLayout->addWidget(SPort);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Server);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        recorb = new QTextEdit(widget_2);
        recorb->setObjectName(QStringLiteral("recorb"));

        verticalLayout_3->addWidget(recorb);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(Server);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        msg = new QTextEdit(widget_3);
        msg->setObjectName(QStringLiteral("msg"));

        verticalLayout_2->addWidget(msg);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(Server);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(265, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        send = new QPushButton(widget_4);
        send->setObjectName(QStringLiteral("send"));

        horizontalLayout_2->addWidget(send);


        verticalLayout->addWidget(widget_4);


        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QWidget *Server)
    {
        Server->setWindowTitle(QApplication::translate("Server", "Server", Q_NULLPTR));
        label->setText(QApplication::translate("Server", "IP", Q_NULLPTR));
        label_2->setText(QApplication::translate("Server", "Port", Q_NULLPTR));
        label_3->setText(QApplication::translate("Server", "\350\201\212\345\244\251\350\256\260\345\275\225", Q_NULLPTR));
        label_4->setText(QApplication::translate("Server", "\350\276\223\345\205\245", Q_NULLPTR));
        send->setText(QApplication::translate("Server", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
