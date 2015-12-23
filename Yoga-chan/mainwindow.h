#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QString nom, QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString nom;
};

#endif // MAINWINDOW_H
