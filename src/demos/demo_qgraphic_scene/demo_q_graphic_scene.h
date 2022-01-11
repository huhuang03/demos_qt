//
// Created by hwf on 2022/1/11.
//

#ifndef DEMOS_QT_SRC_DEMOS_DEMO_QGRAPHIC_SCENE_DEMO_Q_GRAPHIC_SCENE_H_
#define DEMOS_QT_SRC_DEMOS_DEMO_QGRAPHIC_SCENE_DEMO_Q_GRAPHIC_SCENE_H_

#include <QMainWindow>
#include <QGraphicsView>
#include <QWidget>
#include <QMatrix>

// do the open again?
// fu*k you!
class DemoQGraphicScene: public QMainWindow {
 Q_OBJECT

 private:
  // ok, can't use chinese?
  static float moveFactor;

 // why can't recognize you?
  // 0.2 is ok more or less.
  static double scaleFactor;

  // why clion can't prompt initial value?
  static int width;
  static int height;

 private:
  // pass
  QGraphicsView *graphicView;
  QMatrix matrix;

 public:
  DemoQGraphicScene();

 private slots:
   void open();
   void left();
   void right();
   void up();
   void down();
   void zoomIn();
   void zoomOut();
};

#endif //DEMOS_QT_SRC_DEMOS_DEMO_QGRAPHIC_SCENE_DEMO_Q_GRAPHIC_SCENE_H_
