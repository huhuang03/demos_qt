//
// Created by huhua on 2021/10/9.
//

#include "app.h"
#include <iostream>
#include "./demos/clock/clock_view.h"
#include "./demos/img_viewer/img_viewer.h"

App::App(QWidget *parent): QMainWindow(parent) {
    this->resize(800, 600);

    this->listWidget = new QListWidget(this);
    listWidget->addItem("Clock View");
    listWidget->addItem("Image Viewer");
    connect(listWidget, &QListWidget::itemClicked, this, &App::onItemClick);
    setCentralWidget(this->listWidget);
}

void App::onItemClick(QListWidgetItem *item) {
    if (this->listWidget->item(0) == item) {
        auto clockView = new ClockView();
        clockView->show();
    } else if (this->listWidget->item(1) == item) {
        auto imgViewer = new ImgViewer();
        imgViewer->show();
    }
}
