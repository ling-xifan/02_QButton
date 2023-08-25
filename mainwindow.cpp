#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)

{
    //set the width and height to 800*480, position at (0,0)
    //(0,0)represents the origin, top left corner
    this->setGeometry(0,0,800,480);
    // Instantiate two Button object, set the display text
    pushButton1 = new QPushButton("color 1",this);
    pushButton2 = new QPushButton("color 2",this);

    //set button position and size
    pushButton1->setGeometry(300,200,80,40);
    pushButton2->setGeometry(400,200,80,40);

    //signal slot connect
    connect(pushButton1, SIGNAL(clicked()),this,SLOT(pushButton1Clicked()));
    connect(pushButton2, SIGNAL(clicked()),this,SLOT(pushButton2Clicked()));

}

MainWindow::~MainWindow()
{

}

void MainWindow::pushButton1Clicked()
{
    //set the main window style
    this->setStyleSheet("QMainWindow { background-color: rgba(238, 122, 233, 50%);}");
}
void MainWindow::pushButton2Clicked()
{
    //set the main window style
    this->setStyleSheet("QMainWindow { background-color: rgba(255, 245, 238, 50%);}");
}
