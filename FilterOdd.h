// Practical 5 ADDS: FilterOdd
// Zemin Wong A1780385

#ifndef FILTERODD_H
#define FILTERODD_H

#include "FilterGeneric.h"
#include <vector>

class FilterOdd : public FilterGeneric{
  bool g(int input);
  public:
    std::vector<int> filter(std::vector<int> inputVector);
};

#endif // FILTERODD_H