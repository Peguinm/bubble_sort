#include "bubble_sort.h"
#include <vector>

std::vector<int> BubbleSort::_vector = {};

BubbleSort::BubbleSort() {}

BubbleSort::~BubbleSort() {}

void
BubbleSort::setVector(std::vector<int> vector)
{
  _vector = vector;
}

std::vector<int>
BubbleSort::getVector()
{
  return _vector;
}

int
BubbleSort::getValueAt(const int &index)
{
  return _vector[index];
}

void
BubbleSort::sort(bs::SortMode sortMode)
{
  static int lastPos = 0;
  static int loops = 0;
  const int length = _vector.size();

  if (lastPos >= length - loops)
  {
    lastPos = 0;
    loops++;
  }

  if (_vector[lastPos] > _vector[lastPos + 1])
  {
    int tmp = _vector[lastPos];
    _vector[lastPos] = _vector[lastPos + 1];
    _vector[lastPos + 1] = tmp;
  }

  lastPos++;
}
