//
// Created by huhua on 2021/10/10.
//

#include "clock_view.h"
#include <QTimer>
#include <QTime>
#include <QPainter>
#include <QColor>
#include <iostream>

ClockView::ClockView(QWidget *parent): QWidget(nullptr) {
    auto *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&ClockView::update));
    timer->start(1000);

    setWindowTitle(tr("Analog Clock"));
    resize(200, 200);
}

void ClockView::paintEvent(QPaintEvent *event) {
    static const QPoint hourHand[3] = {
            QPoint(7, 8),
            QPoint(-7, 8),
            QPoint(0, -40),
    };

    static const QPoint minuteHand[3] = {
            QPoint(7, 8),
            QPoint(-7, 8),
            QPoint(0, -70),
    };

    static const QPoint secondHand[3] = {
            QPoint(3, 4),
            QPoint(-3, 4),
            QPoint(0, -90),
    };

    QColor hourColor(127, 0, 127);
    QColor minuteColor(0, 127,127, 191);
    QColor secondColor(0, 0,0, 191);

    int side = qMin(width(), height());
    QTime time = QTime::currentTime();

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.translate(width() / 2, height() / 2);
    painter.scale(side / 200.0, side / 200.0);

    painter.setPen(Qt::NoPen);
    painter.setBrush(hourColor);

    painter.save();
    painter.rotate(30.0 * ((time.hour() + time.minute() / 60.0)));
    painter.drawConvexPolygon(hourHand, 3);
    painter.restore();

    painter.setBrush(minuteColor);

    painter.save();
    painter.rotate(360 * (time.minute() / 60.0));
    painter.drawConvexPolygon(minuteHand, 3);
    painter.restore();


    painter.setBrush(secondColor);

    painter.save();
    painter.rotate(360 * (time.second() / 60.0));
    painter.drawConvexPolygon(secondHand, 3);
    painter.restore();

    painter.save();
    painter.setPen(minuteColor);

    for (int j = 0; j < 60; ++j) {
        if ((j % 5) != 0)
            painter.drawLine(92, 0, 96, 0);
        painter.rotate(6.0);
    }
    painter.restore();

    painter.save();
    painter.setPen(hourColor);

    for (int i = 0; i < 12; ++i) {
        painter.drawLine(88, 0, 96, 0);
        painter.rotate(30.0);
    }
    painter.restore();
}
