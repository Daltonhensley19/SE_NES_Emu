#include "window.h"
#include <QApplication>
#include <QMainWindow>

int main(int argc, char** argv)
{
  QApplication app(argc, argv);

  //Instantiate window object
  Window win;

  //Declare MainWindow to encapsulate win object
  //for use of toolBar
  QMainWindow MainWindow;

  //Pass window object as widget for MainWindow
  MainWindow.setCentralWidget(&win);

  //Show MainWindow
  MainWindow.show();

  return app.exec();
}
