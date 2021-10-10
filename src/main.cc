//
// Created by huhua on 2021/10/9.
//
#include <QApplication>
#include <QListWidget>
#include "./app.h"

int main(int argc, char** argv) {
    QApplication q(argc, argv);

    App app(nullptr);
    app.show();

    return QApplication::exec();
}