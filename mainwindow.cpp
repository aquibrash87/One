#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnHello_clicked()
{
    static int count = 0;
        QString strCount;

        // display text message in first label
        ui->lblHello->setText("Hello, world!");

        // display button clicked count in second label
        count++;
        strCount.sprintf("%d", count);
        ui->lblCount->setText(strCount);
}
