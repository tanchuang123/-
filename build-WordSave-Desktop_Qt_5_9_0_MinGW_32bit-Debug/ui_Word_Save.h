/********************************************************************************
** Form generated from reading UI file 'Word_Save.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_SAVE_H
#define UI_WORD_SAVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Word_Save
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txtname;
    QLineEdit *txtpwd;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *loginButton;
    QPushButton *forgetButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_password;
    QSpacerItem *horizontalSpacer;
    QPushButton *install_PushButton;

    void setupUi(QDialog *Word_Save)
    {
        if (Word_Save->objectName().isEmpty())
            Word_Save->setObjectName(QStringLiteral("Word_Save"));
        Word_Save->resize(400, 300);
        layoutWidget = new QWidget(Word_Save);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(51, 43, 253, 111));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        txtname = new QLineEdit(layoutWidget);
        txtname->setObjectName(QStringLiteral("txtname"));

        verticalLayout_2->addWidget(txtname);

        txtpwd = new QLineEdit(layoutWidget);
        txtpwd->setObjectName(QStringLiteral("txtpwd"));

        verticalLayout_2->addWidget(txtpwd);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        horizontalLayout_2->addWidget(loginButton);

        forgetButton = new QPushButton(layoutWidget);
        forgetButton->setObjectName(QStringLiteral("forgetButton"));

        horizontalLayout_2->addWidget(forgetButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        widget = new QWidget(Word_Save);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(52, 174, 251, 25));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBox_password = new QCheckBox(widget);
        checkBox_password->setObjectName(QStringLiteral("checkBox_password"));

        horizontalLayout_3->addWidget(checkBox_password);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        install_PushButton = new QPushButton(widget);
        install_PushButton->setObjectName(QStringLiteral("install_PushButton"));

        horizontalLayout_3->addWidget(install_PushButton);


        retranslateUi(Word_Save);

        QMetaObject::connectSlotsByName(Word_Save);
    } // setupUi

    void retranslateUi(QDialog *Word_Save)
    {
        Word_Save->setWindowTitle(QApplication::translate("Word_Save", "Word_Save", Q_NULLPTR));
        label->setText(QApplication::translate("Word_Save", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("Word_Save", "\345\257\206\347\240\201", Q_NULLPTR));
        loginButton->setText(QApplication::translate("Word_Save", "\347\231\273\345\275\225", Q_NULLPTR));
        forgetButton->setText(QApplication::translate("Word_Save", "\345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
        checkBox_password->setText(QApplication::translate("Word_Save", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        install_PushButton->setText(QApplication::translate("Word_Save", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Word_Save: public Ui_Word_Save {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_SAVE_H
