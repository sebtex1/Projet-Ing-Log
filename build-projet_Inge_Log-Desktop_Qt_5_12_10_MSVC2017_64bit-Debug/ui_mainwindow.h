/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *height_box;
    QRadioButton *random_no;
    QSpinBox *start_x_box;
    QLabel *goal_y_label;
    QSpinBox *goal_y_box;
    QLabel *goal_x_label;
    QPushButton *show_button;
    QLabel *start_label;
    QSpinBox *start_y_box;
    QLabel *height_label;
    QLabel *width_label;
    QLabel *random_label;
    QLabel *start_y_label;
    QSpinBox *goal_x_box;
    QRadioButton *random_yes;
    QSpinBox *width_box;
    QLabel *start_x_label;
    QLabel *goal_label;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(509, 298);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(20, 10, 241, 231));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        height_box = new QSpinBox(groupBox);
        height_box->setObjectName(QString::fromUtf8("height_box"));

        gridLayout->addWidget(height_box, 0, 4, 1, 1);

        random_no = new QRadioButton(groupBox);
        random_no->setObjectName(QString::fromUtf8("random_no"));

        gridLayout->addWidget(random_no, 3, 3, 1, 1);

        start_x_box = new QSpinBox(groupBox);
        start_x_box->setObjectName(QString::fromUtf8("start_x_box"));

        gridLayout->addWidget(start_x_box, 5, 2, 1, 1);

        goal_y_label = new QLabel(groupBox);
        goal_y_label->setObjectName(QString::fromUtf8("goal_y_label"));

        gridLayout->addWidget(goal_y_label, 7, 3, 1, 1);

        goal_y_box = new QSpinBox(groupBox);
        goal_y_box->setObjectName(QString::fromUtf8("goal_y_box"));

        gridLayout->addWidget(goal_y_box, 7, 4, 1, 1);

        goal_x_label = new QLabel(groupBox);
        goal_x_label->setObjectName(QString::fromUtf8("goal_x_label"));

        gridLayout->addWidget(goal_x_label, 7, 1, 1, 1);

        show_button = new QPushButton(groupBox);
        show_button->setObjectName(QString::fromUtf8("show_button"));

        gridLayout->addWidget(show_button, 9, 2, 1, 2);

        start_label = new QLabel(groupBox);
        start_label->setObjectName(QString::fromUtf8("start_label"));

        gridLayout->addWidget(start_label, 4, 1, 1, 1);

        start_y_box = new QSpinBox(groupBox);
        start_y_box->setObjectName(QString::fromUtf8("start_y_box"));

        gridLayout->addWidget(start_y_box, 5, 4, 1, 1);

        height_label = new QLabel(groupBox);
        height_label->setObjectName(QString::fromUtf8("height_label"));

        gridLayout->addWidget(height_label, 0, 3, 1, 1);

        width_label = new QLabel(groupBox);
        width_label->setObjectName(QString::fromUtf8("width_label"));

        gridLayout->addWidget(width_label, 0, 1, 1, 1);

        random_label = new QLabel(groupBox);
        random_label->setObjectName(QString::fromUtf8("random_label"));

        gridLayout->addWidget(random_label, 1, 1, 1, 4);

        start_y_label = new QLabel(groupBox);
        start_y_label->setObjectName(QString::fromUtf8("start_y_label"));

        gridLayout->addWidget(start_y_label, 5, 3, 1, 1);

        goal_x_box = new QSpinBox(groupBox);
        goal_x_box->setObjectName(QString::fromUtf8("goal_x_box"));

        gridLayout->addWidget(goal_x_box, 7, 2, 1, 1);

        random_yes = new QRadioButton(groupBox);
        random_yes->setObjectName(QString::fromUtf8("random_yes"));

        gridLayout->addWidget(random_yes, 3, 1, 1, 1);

        width_box = new QSpinBox(groupBox);
        width_box->setObjectName(QString::fromUtf8("width_box"));

        gridLayout->addWidget(width_box, 0, 2, 1, 1);

        start_x_label = new QLabel(groupBox);
        start_x_label->setObjectName(QString::fromUtf8("start_x_label"));

        gridLayout->addWidget(start_x_label, 5, 1, 1, 1);

        goal_label = new QLabel(groupBox);
        goal_label->setObjectName(QString::fromUtf8("goal_label"));

        gridLayout->addWidget(goal_label, 6, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 260, 80, 21));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(280, 30, 211, 251));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Attributs et taille du labyrinthe", nullptr));
        random_no->setText(QApplication::translate("MainWindow", "Non", nullptr));
        goal_y_label->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        goal_x_label->setText(QApplication::translate("MainWindow", "X:", nullptr));
        show_button->setText(QApplication::translate("MainWindow", "Show", nullptr));
        start_label->setText(QApplication::translate("MainWindow", "D\303\251part:", nullptr));
        height_label->setText(QApplication::translate("MainWindow", "Hauteur", nullptr));
        width_label->setText(QApplication::translate("MainWindow", "Largeur", nullptr));
        random_label->setText(QApplication::translate("MainWindow", "Position de d\303\251part et d'ariv\303\251e al\303\251atoire", nullptr));
        start_y_label->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        random_yes->setText(QApplication::translate("MainWindow", "Oui", nullptr));
        start_x_label->setText(QApplication::translate("MainWindow", "X:", nullptr));
        goal_label->setText(QApplication::translate("MainWindow", "Arriv\303\251e:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Resume", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
