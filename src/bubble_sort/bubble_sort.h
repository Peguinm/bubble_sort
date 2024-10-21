#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "sort_enum.h"
#include <vector>

class BubbleSort
{
private:
  static std::vector<int> _vector;

  BubbleSort();

public:
  virtual ~BubbleSort();

  static void setVector(std::vector<int> vector);
  static std::vector<int> getVector();
  static void sort(bs::SortMode);
  static int getValueAt(const int &index);
};

#endif