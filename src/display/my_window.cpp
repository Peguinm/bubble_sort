#include "my_window.h"
#include "entity_manager.h"

#include "../bubble_sort/bubble_sort.h"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/WindowStyle.hpp>
#include <cstddef>
#include <cwchar>
#include <iostream>
#include <vector>

/*
 * Inicializa a janela com base nas dimensões e titulo
 */
MyWindow::MyWindow(int width, int height, const char *title)
  : width(width)
  , height(height)
  , _title(title)
{
  _window = nullptr;
}

/*
 * Limpando os ponteiros da instância
 */
MyWindow::~MyWindow()
{
  delete _window;
}

/*
 * Inicia o looping principal da janela e chama os métodos de rendenização
 */
void
MyWindow::init()
{
  if (_window == nullptr)
  {
    _window = new sf::RenderWindow(
      sf::VideoMode(width, height), _title, sf::Style::Close);
  }

  while (_window->isOpen())
  {
    /* Processando com os eventos do SFML */
    poolEvent(_event);

    /* Rendenizando tela */
    clear();
    draw();
    display();
  }
}

void
MyWindow::clear()
{
  _window->clear(sf::Color::Black);
}

void
MyWindow::draw()
{
  std::vector<Entity *> entities = EntityManager::getEntitiesVector();

  BubbleSort::sort(bs::SortMode::Ascend);

  for (Entity *entity : entities)
  {
    entity->update();
  }

  for (Entity *entity : entities)
  {
    entity->draw(_window);
  }
}

void
MyWindow::display()
{
  _window->display();
}

/*
 * Processa os eventos do SFML
 */
void
MyWindow::poolEvent(sf::Event &event)
{
  while (_window->pollEvent(event))
  {
    if (event.type == sf::Event::Closed)
    {
      _window->close();
    }
  }
}
