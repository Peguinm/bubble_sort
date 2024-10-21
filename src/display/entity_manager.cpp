#include "entity_manager.h"
#include <vector>

int EntityManager::_lastId = 0;
std::vector<Entity *> EntityManager::_entityVector = {};

EntityManager::EntityManager() {}

EntityManager::~EntityManager()
{
  for (auto &entity : _entityVector)
  {
    delete entity;
  }
}

int
EntityManager::addEntity(Entity *entity)
{
  _lastId++;
  entity->setId(_lastId);

  _entityVector.push_back(entity);

  return _lastId;
}

std::vector<Entity *> &
EntityManager::getEntitiesVector()
{
  return _entityVector;
}

int
EntityManager::getLastID()
{
  return _lastId;
}
