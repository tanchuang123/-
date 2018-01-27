/********************************************************************************
** Form generated from reading UI file 'Install_Word_Form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTALL_WORD_FORM_H
#define UI_INSTALL_WORD_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Install_Word_Form
{
public:
    QPushButton *pushButton_yes;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *user_Name;
    QLineEdit *pass_Word;
    QLineEdit *confirm_lineEdit;

    void setupUi(QDialog *Install_Word_Form)
    {
        if (Install_Word_Form->objectName().isEmpty())
            Install_Word_Form->setObjectName(QStringLiteral("Install_Word_Form"));
        Install_Word_Form->resize(400, 300);
        pushButton_yes = new QPushButton(Install_Word_Form);
        pushButton_yes->setObjectName(QStringLiteral("pushButton_yes"));
        pushButton_yes->setGeometry(QRect(240, 190, 75, 23));
        widget = new QWidget(Install_Word_Form);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 80, 199, 76));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        user_Name = new QLineEdit(widget);
        user_Name->setObjectName(QStringLiteral("user_Name"));

        verticalLayout_2->addWidget(user_Name);

        pass_Word = new QLineEdit(widget);
        pass_Word->setObjectName(QStringLiteral("pass_Word"));

        verticalLayout_2->addWidget(pass_Word);

        confirm_lineEdit = new QLineEdit(widget);
        confirm_lineEdit->setObjectName(QStringLiteral("confirm_lineEdit"));

        verticalLayout_2->addWidget(confirm_lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Install_Word_Form);

        QMetaObject::connectSlotsByName(Install_Word_Form);
    } // setupUi

    void retranslateUi(QDialog *Install_Word_Form)
    {
        Install_Word_Form->setWindowTitle(QApplication::translate("Install_Word_Form", "Dialog", Q_NULLPTR));
        pushButton_yes->setText(QApplication::translate("Install_Word_Form", "\347\241\256\345\256\232", Q_NULLPTR));
        label->setText(QApplication::translate("Install_Word_Form", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("Install_Word_Form", "\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("Install_Word_Form", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Install_Word_Form: public Ui_Install_Word_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTALL_WORD_FORM_H
