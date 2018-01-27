/********************************************************************************
** Form generated from reading UI file 'messagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEDIALOG_H
#define UI_MESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_messageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_status;
    QFrame *frame_2;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *messageDialog)
    {
        if (messageDialog->objectName().isEmpty())
            messageDialog->setObjectName(QStringLiteral("messageDialog"));
        messageDialog->resize(484, 160);
        verticalLayout = new QVBoxLayout(messageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(messageDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("background-color: rgb(70, 70, 70);\n"
"background-color: rgb(170, 0, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_status = new QLabel(frame);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 20pt \"Agency FB\";\n"
"font: 75 20pt \"Agency FB\";\n"
"border-radius:15px;"));

        horizontalLayout->addWidget(label_status);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(messageDialog);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 255);\n"
"border-radius:70px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_ok = new QPushButton(frame_2);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setEnabled(true);
        pushButton_ok->setGeometry(QRect(190, 10, 90, 45));
        pushButton_ok->setMinimumSize(QSize(90, 45));
        pushButton_ok->setMaximumSize(QSize(90, 45));
        pushButton_ok->setStyleSheet(QLatin1String("QPushButton{\n"
"color:rgb(255,255,255);\n"
"border:4px solid rgb(0,255,255);\n"
"background-color: rgb(74, 112, 112);\n"
"border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	color: rgb(71, 120, 255);\n"
"border:4px solid rgb(74, 112, 112);\n"
"background-color: rgb(0,255,255);\n"
"}"));

        verticalLayout->addWidget(frame_2);


        retranslateUi(messageDialog);

        QMetaObject::connectSlotsByName(messageDialog);
    } // setupUi

    void retranslateUi(QDialog *messageDialog)
    {
        messageDialog->setWindowTitle(QApplication::translate("messageDialog", "Dialog", Q_NULLPTR));
        label_status->setText(QApplication::translate("messageDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#ff0000;\">TextLabel</span></p></body></html>", Q_NULLPTR));
        pushButton_ok->setText(QApplication::translate("messageDialog", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class messageDialog: public Ui_messageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEDIALOG_H
