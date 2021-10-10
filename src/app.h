//
// Created by huhua on 2021/10/9.
//

#ifndef DEMOS_QT_APP_H
#define DEMOS_QT_APP_H

#include <QMainWindow>
#include <QListWidgetItem>

class App: public QMainWindow {
    Q_OBJECT

public:
    App(QWidget *parent);

private:
    QListWidget *listWidget;

private:
    void onItemClick(QListWidgetItem *item);
};


#endif //DEMOS_QT_APP_H
