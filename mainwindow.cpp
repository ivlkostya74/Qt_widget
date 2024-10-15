#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Установка имен для RadioButton
    ui->radioButton1->setText("Option 1");
    ui->radioButton2->setText("Option 2");

    // Добавление элементов в выпадающий список (ComboBox)
    // ui->comboBox->addItem("Item 1");
    // ui->comboBox->addItem("Item 2");
    // ui->comboBox->addItem("Item 3");

    // Изменение надписи на кнопке и установка типа Toggle
    ui->pushButton->setText("рубильник");
    ui->pushButton->setCheckable(true);

    // Настройка прогресс-бара
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(10);
    ui->progressBar->setValue(0);

    // Подключение сигнала нажатия кнопки к слоту
     connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
}

    MainWindow::~MainWindow()
    {
        delete ui;  // Освобождаем память
    }
void MainWindow::onButtonClicked()
{
    // Получаем текущее значение прогресс-бара
    int value = ui->progressBar->value();

    // Увеличиваем значение на 1 (10%)
    value += 1;

    // Если значение больше 10, сбрасываем его в 0
    if (value > 10)
        value = 0;

    // Устанавливаем новое значение прогресс-бара
    ui->progressBar->setValue(value);
}
