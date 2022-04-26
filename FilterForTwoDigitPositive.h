// Practical 5 ADDS: FilterForTwoDigitalPositive
// Zemin Wong A1780385

#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H

#include "FilterGeneric.h"
#include <vector>

class FilterForTwoDigitPositive : public FilterGeneric{
  bool g(int input);
  public:
    std::vector<int> filter(std::vector<int> inputVector);
};

#endif // FILTERFORTWODIGITPOSITIVE_H