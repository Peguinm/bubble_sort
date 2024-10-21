#ifndef COLUM_H
#define COLUM_H

#include "entity.h"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>

class Colum : public Entity
{
private:
  int _index;

public:
  Colum(sf::Vector2f position, sf::Vector2f size, sf::Color color, int index);
  virtual ~Colum();

  virtual void update() override;
};

#endif