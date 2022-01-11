//
// Created by hwf on 2022/1/11.
//

#ifndef DEMOS_QT_SRC_DEMOS_DEMO_QGRAPHIC_SCENE_DEMO_Q_GRAPHIC_SCENE_H_
#define DEMOS_QT_SRC_DEMOS_DEMO_QGRAPHIC_SCENE_DEMO_Q_GRAPHIC_SCENE_H_

#include <QMainWindow>
#include <QWidget>

// do the open again?
// fu*k you!
class DemoQGraphicScene: public QMainWindow {
 Q_OBJECT
 private:
  // 每次移动多少像素
  // 我觉得应该每次移动当前界面的百分比吧
  static float moveFactor;

  // 0.2 差不多
  static float scaleFactor;

  // why clion can't prompt initial value?
  static int width;
  static int height;

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
