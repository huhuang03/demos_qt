//
// Created by huhua on 2021/10/10.
//

#ifndef DEMOS_QT_CLOCK_VIEW_H
#define DEMOS_QT_CLOCK_VIEW_H

#include <QWidget>

class ClockView : public QWidget {
    Q_OBJECT
public:
    ClockView(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
};


#endif //DEMOS_QT_CLOCK_VIEW_H
