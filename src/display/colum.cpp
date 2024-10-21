#include "colum.h"
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>
#include <iostream>
#include <ostream>

#include "../bubble_sort/bubble_sort.h"
#include "entity.h"

Colum::Colum(sf::Vector2f position,
             sf::Vector2f size,
             sf::Color color,
             int index)
  : _index(index)
  , Entity()
{
  sf::RectangleShape shape;

  shape.setSize(size);
  shape.setPosition(position);
  shape.setFillColor(color);

  setShape(shape);
}

Colum::~Colum() {}

void
Colum::update()
{
  int value = BubbleSort::getValueAt(_index);

  sf::RectangleShape &shape = Entity::getShape();

  sf::Vector2f size = { shape.getSize().x, (float)value * 2 };
  sf::Vector2f position = shape.getPosition();
  position = { position.x, 400 - size.y };

  shape.setSize(size);
  shape.setPosition(position);
}