
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT  // Обязательный макрос для работы сигналов и слотов

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:  // Слоты для сигналов
    void onButtonClicked();  // Объявление слота для нажатия кнопки

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

