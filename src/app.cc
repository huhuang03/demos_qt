//
// Created by huhua on 2021/10/9.
//

#include "app.h"
#include <iostream>
#include "./demos/clock/clock_view.h"

App::App(QWidget *parent): QMainWindow(parent) {
    this->resize(800, 600);

    this->listWidget = new QListWidget(this);
    listWidget->addItem("Clock View");
    connect(listWidget, &QListWidget::itemClicked, this, &App::onItemClick);
}

void App::onItemClick(QListWidgetItem *item) {
    if (this->listWidget->item(0) == item) {
        std::cout << "onItemClick 0 called" << std::endl;
        auto clockView = new ClockView();
        clockView->show();
    }
}
