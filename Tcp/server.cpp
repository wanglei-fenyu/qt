#include "server.h"
#include "ui_server.h"

//添加模块network
#include<QTcpServer>
#include<QTcpSocket>

Server::Server(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);

    //初始化ui
    ui->SIp->setText("127.0.0.1");
    ui->SPort->setText("9998");

    server = new QTcpServer(this);
    //监听
    server->listen(QHostAddress(ui->SIp->text()),ui->SPort->text().toInt());

    //新的连接
    connect(server,&QTcpServer::newConnection,this,[=]()
    {
       //接收客户端的套接字
       conn = server->nextPendingConnection();

       ui->recorb->append("有新的连接...");

       //因为客户端每连接一个 就会初始化conn所以放到里面 确保不被重新初始化
       connect(conn,&QTcpSocket::readyRead,this,[=]()
       {
           //接受数据
           QByteArray array = conn->readAll();
           ui->recorb->append(array);
       });
    });


    //发送
    connect(ui->send,&QPushButton::clicked,this,[=]()
    {
       conn->write(ui->msg->toPlainText().toUtf8());
       ui->recorb->append("Server__>>:"+ ui->msg->toPlainText().toUtf8());
       ui->msg->clear();
    });


}

Server::~Server()
{
    delete ui;
}
