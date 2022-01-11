//
// Created by hwf on 2022/1/11.
//

#include "demo_q_graphic_scene.h"
#include <QMenu>
#include <QMenuBar>

float DemoQGraphicScene::moveFactor = 0.1f;
double DemoQGraphicScene::scaleFactor = 0.2;
int DemoQGraphicScene::width = 800;
int DemoQGraphicScene::height = 600;

DemoQGraphicScene::DemoQGraphicScene() {
  this->setFixedSize(DemoQGraphicScene::width, DemoQGraphicScene::height);

  // how to do the menu?
  QMenu *fileMenu = menuBar()->addMenu(tr("&File"));
  fileMenu->addAction(tr("&Open..."), this, &DemoQGraphicScene::open);

  QMenu *opMenu = menuBar()->addMenu(tr("&Operate"));
  opMenu->addAction(tr("&Left..."), this, &DemoQGraphicScene::left);
  opMenu->addAction(tr("&Right..."), this, &DemoQGraphicScene::right);
  opMenu->addAction(tr("&Up..."), this, &DemoQGraphicScene::up);
  opMenu->addAction(tr("&Down..."), this, &DemoQGraphicScene::down);
  opMenu->addAction(tr("&zoomIn..."), this, &DemoQGraphicScene::zoomIn);
  opMenu->addAction(tr("&zoomOut..."), this, &DemoQGraphicScene::zoomOut);
}

// ok, maybe you are cool
void DemoQGraphicScene::open() {
}

void DemoQGraphicScene::left() {

}

void DemoQGraphicScene::right() {
}

void DemoQGraphicScene::up() {
}

void DemoQGraphicScene::down() {
}

void DemoQGraphicScene::zoomIn() {
//  matrix.scale();
}

void DemoQGraphicScene::zoomOut() {
}