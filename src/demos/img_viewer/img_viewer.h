//
// Created by huhua on 2021/10/12.
//

#ifndef DEMOS_QT_IMG_VIEWER_H
#define DEMOS_QT_IMG_VIEWER_H

#include <QWidget>
#include <QMainWindow>
#include <QScrollBar>
#include <QScrollArea>
#include <QLabel>
#include <QAction>

class ImgViewer: public QMainWindow {
    Q_OBJECT
public:
    ImgViewer(QWidget *parent = nullptr);
    bool loadFile(const QString&);

private slots:
    void open();
    void saveAs();
    void print();
    void copy();
    void paste();
    void zoomIn();
    void zoomOut();
    void normalSize();
    void fitToWindow();
    void about();
//
private:
    void createActions();
    void createMenus();
    void updateActions();
    bool saveFile(const QString &fileName);
    void setImage(const QImage &newImage);
    void scaleImage(double factor);
    void adjustScrollBar(QScrollBar *scrollBar, double factor);

    QImage image;
    QLabel *imageLabel;
    QScrollArea *scrollArea;
    double scaleFactor = 1;
//
//#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
//    QPrinter printer;
//#endif
//
    QAction *saveAsAct;
    QAction *printAct;
    QAction *copyAct;
    QAction *zoomInAct;
    QAction *zoomOutAct;
    QAction *normalSizeAct;
    QAction *fitToWindowAct;
};


#endif //DEMOS_QT_IMG_VIEWER_H
