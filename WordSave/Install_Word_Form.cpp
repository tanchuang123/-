#include "Install_Word_Form.h"
#include "ui_Install_Word_Form.h"
#include <QMessageBox>
#include <QSettings>

Install_Word_Form::Install_Word_Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Install_Word_Form)
{
    ui->setupUi(this);
   // ui->confirm_lineEdit->setEnabled(yes_word);
    ui->pass_Word->setEchoMode(QLineEdit::Password);
    ui->confirm_lineEdit->setEchoMode(QLineEdit::Password);
    ui->user_Name->setPlaceholderText(tr("注册用户名"));
    ui->pass_Word->setPlaceholderText(tr("密码"));
    ui->confirm_lineEdit->setPlaceholderText(tr("确认密码"));
    info=new messageDialog(this);
}

Install_Word_Form::~Install_Word_Form()
{
    delete ui;
}

void Install_Word_Form::on_pushButton_yes_clicked()
{
    if(this->ui->user_Name->text().trimmed()== NULL)
    {

        info->message_show(tr("提示"),tr("请输入用户名!"));
    }
    if(this->ui->pass_Word->text().trimmed()== NULL)
    {

        info->message_show(tr("提示"),tr("请输入密码!"));
    }
    if(this->ui->confirm_lineEdit->text().trimmed()==NULL)
    {

         info->message_show(tr("提示"),tr("请确认密码!"));
    }
    else if(ui->pass_Word->text().trimmed()==ui->confirm_lineEdit->text().trimmed())
    {
        userName=ui->user_Name->text();
        passWord=ui->confirm_lineEdit->text();
        setIni(userName,passWord);
        status=true;
        install_statue(status);
        close();
    }
    else
    {
        info->message_show(tr("提示"),tr("输入错误，请重新输入!"));
        ui->confirm_lineEdit->clear();
    }


   // return yes_word;
}
bool Install_Word_Form::install_statue(bool status)
{
    return status;
}
void Install_Word_Form::setIni(QString username,QString password)
{

    QSettings *Ini=new QSettings(QCoreApplication::applicationDirPath()+"/word_save.ini", QSettings::IniFormat);
    Ini->setValue("/setting/userName", tr("%1").arg(username));
    Ini->setValue("/setting/passWord", tr("%1").arg(password));
    delete Ini;
}
void Install_Word_Form::ReadIni()
{
    QSettings *pIni = new QSettings(QCoreApplication::applicationDirPath()+"/word_save.ini", QSettings::IniFormat);
        QString sArg = "";
        sArg = pIni->value("/setting/userName").toString();
        qDebug("arg1 = %s\n", sArg.toStdString().data());

        sArg = "";
        sArg = pIni->value("/setting/passWord").toString();
        qDebug("arg2 = %s\n", sArg.toStdString().data());


        delete pIni;

}
