#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/String.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/WindowStyle.hpp>
#include <algorithm>
#include <corecrt.h>
#include <iostream>
#include <string>
#include <vector>

#include "bubble_sort/bubble_sort.h"
#include "display/colum.h"
#include "display/entity.h"
#include "display/entity_manager.h"
#include "display/my_window.h"

const int WINDOW_WIDTH = 400;
const int WINDOW_HEIGTH = 400;

int
main(int argc, char **argv)
{
  int columWidth = 2;
  int vectorSize = WINDOW_WIDTH / columWidth;

  std::vector<int> vector(vectorSize);

  /*
   * Populando array com valores a partir do tamanho da array
   * até 0
   */
  for (int i = 0; i < vectorSize; i++)
  {
    vector[i] = vectorSize - i;
  }

  MyWindow window = MyWindow(WINDOW_WIDTH, WINDOW_HEIGTH, "Bubble Sort");

  BubbleSort::setVector(vector);

  sf::RectangleShape shape;

  for (int i = 0; i < vectorSize; i++)
  {
    float height = vector[i] * 2;
    float width = ((float)WINDOW_WIDTH / vectorSize);

    sf::Vector2f position = { i * width, WINDOW_HEIGTH - height };
    sf::Vector2f size = { width, height };
    sf::Color color = sf::Color(255, i, 190);

    Entity *entity = new Colum(position, size, color, i);

    EntityManager::addEntity(entity);
  }

  std::vector<Entity *> entities = EntityManager::getEntitiesVector();

  window.init();

  return 0;
}
