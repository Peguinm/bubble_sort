#include "entity.h"
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Shape.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <cstddef>

Entity::Entity() {}

Entity::Entity(sf::RectangleShape &shape)
  : _shape(shape)
{
}

Entity::~Entity() {}

void
Entity::draw(sf::RenderWindow *window)
{
  window->draw(_shape);
}

void
Entity::setShape(sf::RectangleShape &shape)
{
  _shape = shape;
}

sf::RectangleShape &
Entity::getShape()
{
  return _shape;
}

void
Entity::setId(int id)
{
  _id = id;
}

void
Entity::update()
{
}
