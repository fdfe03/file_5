// Practical 5 ADDS: MapAbsoluteValue
// Zemin Wong A1780385

#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H

#include "MapGeneric.h"

#include <vector>

class MapAbsoluteValue : public MapGeneric{
  int f(int input);
  public:
    std::vector<int> map(std::vector<int> inputVect);
};

#endif // MAPABSOLUTEVALUE_H