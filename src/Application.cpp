#include <iostream>

#include "Application.h"

Application *gApp;

Application::Application() {
  gApp = this;
}

int Application::open() {
  return 0;
}

void Application::close() {
  should_close = true;
}

void Application::init() {
  loop_count = 0;
}

void Application::runLoop() {
  while(!should_close) {
    if (loop_count < 1) {
      std::cout << "\tHello Multiverse!\n";
      loop_count++;
    }

    std::cout << "\n\nPress [Enter] to end...\n";
    std::cin.ignore();
    this->close();
  }
}

void Application::cleanUp() {
  loop_count = 0;
}
