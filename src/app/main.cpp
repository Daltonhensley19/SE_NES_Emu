#include "window.h"
#include <QApplication>
#include <QMainWindow>

int main(int argc, char** argv)
{
  QApplication app(argc, argv);

  //Instantiate window object
  Window win;

  //Show MainWindow
  win.show();

  return app.exec();
}
