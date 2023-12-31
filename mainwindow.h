#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
// Introducting the QPushButton class
#include <QPushButton>
#include <QToolBar>
#include <QToolButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    //Declare two QPushButton objects
    QPushButton *pushButton1;
    QPushButton *pushButton2;

    //Declare a QToolButton object
    QToolButton *toolButton;
    //Declare a QToolBar obiect
    QToolBar *toolBar;

private slots:
    //Declare two slot functions
    void pushButton1Clicked();
    void pushButton2Clicked();
};
#endif // MAINWINDOW_H
