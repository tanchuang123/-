#ifndef WORD_SAVE_H
#define WORD_SAVE_H
#include <QSettings>
#include <QDialog>
#define ConfigIniFile "appInfo/setting/Config.ini"
#include "Install_Word_Form.h"
#include "message/messagedialog.h"
namespace Ui {
class Word_Save;
}

class Word_Save : public QDialog
{
    Q_OBJECT

public:
    explicit Word_Save(QWidget *parent = 0);
    ~Word_Save();
    QString readIni(const QString &filename, const QString &key);
private slots:
    void on_loginButton_clicked();

    void on_forgetButton_clicked();
    void on_install_PushButton_clicked();
    int onStateChanged(int state);
protected:
    void changeEvent(QEvent *event_);
    void setIni();
    QString ReadIni_username();
    QString ReadIni_password();
private:
    Ui::Word_Save *ui;
    QString username;
    QString password;
    Install_Word_Form *f;
    bool status_;
    messageDialog *info;
    int state_;
};

#endif // WORD_SAVE_H
