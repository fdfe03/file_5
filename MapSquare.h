// Practical 5 ADDS: MapSquare
// Zemin Wong A1780385

#ifndef MAPSQUARE_H
#define MAPSQUARE_H

#include "MapGeneric.h"
#include <vector>

class MapSquare : public MapGeneric{
  int f(int input);
  public:
    std::vector<int> map(std::vector<int> inputVector);
};

#endif // MAPSQUARE_H