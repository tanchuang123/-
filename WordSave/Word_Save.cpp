#include "Word_Save.h"
#include "ui_Word_Save.h"
#include "QMessageBox"
#include "QTextCodec"
#include "Install_Word_Form.h"
#include <QtDebug>
Word_Save::Word_Save(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Word_Save)
{
    ui->setupUi(this);
    ui->txtpwd->setEchoMode(QLineEdit::Password);
    ui->txtname->setPlaceholderText(tr("请输入用户名"));
    ui->txtpwd->setPlaceholderText(tr("请输入密码"));
    ui->txtname->setText(ReadIni_username());
    ui->txtpwd->setText(ReadIni_password());
//    ui->checkBox_password->setChecked(false);
//    status_=ui->checkBox_password->checkState();
      ui->txtpwd->clear();
    connect(ui->checkBox_password, SIGNAL(stateChanged(int)), this, SLOT(onStateChanged(int)));
    info=new messageDialog(this);
}

Word_Save::~Word_Save()
{
    delete ui;
}

void Word_Save::on_loginButton_clicked()
{
   // connect(ui->checkBox_password, SIGNAL(stateChanged(int)), this, SLOT(onStateChanged(int)));

    if(state_ ==Qt::Checked)
    {
        qDebug()<<"xxxxxxxxx"<<ui->checkBox_password->checkState();
        username=ReadIni_username();
        password=ReadIni_password();
        if(username==""||password=="")
        {
            info->message_show(tr("提示"),tr("该用户未注册，请点击完成注册!"));
        }
        else
        {
            ui->txtname->setText(username);
            ui->txtpwd->setText(password);
            accept();
        }
    }
    else
    {
        qDebug()<<ui->txtpwd->text()<<";"<<ReadIni_password()<<"CCCCCCCCC";

        if(ui->txtpwd->text()==ReadIni_password()&&ui->txtname->text()==ReadIni_username())
        {
            accept();
        }
        else
        {
             info->message_show(tr("提示"),tr("请重新输入!"));
             ui->txtpwd->clear();
        }

    }

}

void Word_Save::on_forgetButton_clicked()
{
    this->close();
}
void Word_Save::changeEvent(QEvent *event_)
{
    QDialog::changeEvent(event_);
        switch (event_->type()) {
        case QEvent::LanguageChange:
            ui->retranslateUi(this);
            break;
        default:
            break;
        }

}

void Word_Save::on_install_PushButton_clicked()
{
    Install_Word_Form *f=new Install_Word_Form(this);
    f->show();
   // ui->install_PushButton->setEnabled(false);
//    if(f->close())
//    {
//        ui->install_PushButton->setEnabled(true);
//    }

}

QString Word_Save::ReadIni_username()
{
    QSettings *pIni = new QSettings(QCoreApplication::applicationDirPath()+"/word_save.ini", QSettings::IniFormat);
        QString user_name="";
        user_name = pIni->value("/setting/userName").toString();
        return user_name;
        delete pIni;

}
QString Word_Save::ReadIni_password()
{
    QSettings *pIni = new QSettings(QCoreApplication::applicationDirPath()+"/word_save.ini", QSettings::IniFormat);

        QString pass_word="";
        pass_word = "";
        pass_word = pIni->value("/setting/passWord").toString();
        return pass_word;
        delete pIni;
}



int Word_Save::onStateChanged(int state)
{

    if (state == Qt::Checked) // "选中"
        {

        }
        else if(state == Qt::PartiallyChecked) // "半选"
        {

        }
        else // 未选中 - Qt::Unchecked
        {

        }
    state_=state;
    return state_;
}
