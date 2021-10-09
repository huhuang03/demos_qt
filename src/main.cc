//
// Created by huhua on 2021/10/9.
//
#include <QApplication>
#include <QMainWindow>
#include <QListWidget>

int main(int argc, char** argv) {
    QApplication q(argc, argv);
    QMainWindow mainWindow;
    mainWindow.resize(800, 600);

    auto listWidget = new QListWidget(&mainWindow);
    listWidget->addItem("Clock View");

    mainWindow.show();
    return QApplication::exec();
}