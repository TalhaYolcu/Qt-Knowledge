#ifndef STACKEDWINDOW_H
#define STACKEDWINDOW_H

#include <QMainWindow>

namespace Ui {
class StackedWindow;
}

class StackedWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StackedWindow(QWidget *parent = nullptr);
    ~StackedWindow();

private slots:
    void on_nextp1_clicked();

    void on_backp2_clicked();

    void on_backp3_clicked();

    void on_nextp2_clicked();

private:
    Ui::StackedWindow *ui;
};

#endif // STACKEDWINDOW_H
