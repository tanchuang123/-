#ifndef INSTALL_WORD_FORM_H
#define INSTALL_WORD_FORM_H

#include <QDialog>
#include "message/messagedialog.h"
namespace Ui {
class Install_Word_Form;
}
class Install_Word_Form : public QDialog
{
    Q_OBJECT

public:
    explicit Install_Word_Form(QWidget *parent = 0);
    ~Install_Word_Form();
    bool install_statue(bool status);
    void setIni(QString username,QString password);
    void ReadIni();

signals:
    bool change_(bool ok);
private slots:
    void on_pushButton_yes_clicked();

private:
    Ui::Install_Word_Form *ui;
    bool status=false;
    QString userName;
    QString passWord;
    messageDialog *info;

};

#endif // INSTALL_WORD_FORM_H
