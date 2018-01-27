#include "Word_Save.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
        MainWindow w; //主界面

        Word_Save login; //登陆界面
        if(login.exec()==QDialog::Accepted)
        {
             w.show();
             return a.exec();
        }
        else return 0;

}
