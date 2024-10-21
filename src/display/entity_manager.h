#ifndef ENTITY_MANAGER_H
#define ENTITY_MANAGER_H

#include "entity.h"
#include <vector>

class EntityManager
{
private:
  EntityManager();

  static int _lastId;
  static std::vector<Entity *> _entityVector;

public:
  virtual ~EntityManager();

  static int getLastID();

  static int addEntity(Entity *entity);
  static std::vector<Entity *> &getEntitiesVector();
};

#endif