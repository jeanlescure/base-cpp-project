#include "Application.h"

int main(int, char**)
{
  Application &app = *new Application;

  int openState = app.open();

  if (openState != 0) {
    return openState;
  }

  app.init();

  app.runLoop();

  app.cleanUp();

  return 0;
}
