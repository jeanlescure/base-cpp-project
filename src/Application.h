#ifndef APPLICATION_H
#define APPLICATION_H

class Application {
  public:
    Application();

    int open();
    void close();

    void init();
    void runLoop();
    void cleanUp();

    int Debug = 0;

  private:
    bool should_close = false;
    int loop_count;
};

#endif //APPLICATION_H
