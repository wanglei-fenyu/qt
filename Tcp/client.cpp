#include "client.h"
#include "ui_client.h"
#include<QTcpSocket>
#include<QHostAddress>
Client::Client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    //初始化ui
    ui->Sip->setText("127.0.0.1");
    ui->Sport->setText("9998");
    //初始化
    client = new QTcpSocket(this);
    //连接服务器
    client->connectToHost(QHostAddress(ui->Sip->text()),ui->Sport->text().toInt());

    //接受数据
    connect(client,&QTcpSocket::readyRead,this,[=](){

       QByteArray array = client->readAll();
       ui->recorb->append(array);
    });
    //发送数据
    connect(ui->send,&QPushButton::clicked,this,[=]()
    {
       client->write(ui->msg->toPlainText().toUtf8());
       ui->recorb->append("Client__>>:"+ui->msg->toPlainText().toUtf8());
       ui->msg->clear();
    });

}

Client::~Client()
{
    delete ui;
}
