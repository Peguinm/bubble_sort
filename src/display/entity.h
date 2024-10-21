#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Shape.hpp>
#include <SFML/Graphics/Text.hpp>
#include <iostream>

class Entity
{
private:
  int _id;
  sf::RectangleShape _shape;

public:
  Entity();
  Entity(sf::RectangleShape &shape);

  virtual ~Entity();

  virtual void update();
  void setId(int id);
  void draw(sf::RenderWindow *window);
  void setShape(sf::RectangleShape &shape);
  sf::RectangleShape& getShape();
};

#endif