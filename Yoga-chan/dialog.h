#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include "mainwindow.h"
#include <QDebug>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:

    void on_btn_ok_clicked();

private:
    Ui::Dialog *ui;
    QSqlDatabase maBDD;
};

#endif // DIALOG_H
