#ifndef MY_WINDOW_H
#define MY_WINDOW_H

#include <SFML/Config.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Utf.hpp>
#include <SFML/Window/Event.hpp>

class MyWindow
{
public:
  int width;
  int height;

private:
  const char *_title;
  sf::RenderWindow *_window;
  sf::Event _event;

public:
  MyWindow(int width, int height, const char *title);
  ~MyWindow();

  void init();
  void poolEvent(sf::Event &event);

  void clear();
  void draw();
  void display();
};

#endif