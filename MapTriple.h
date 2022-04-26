// Practical 5 ADDS: MapTriple
// Zemin Wong A1780385

#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H

#include "MapGeneric.h"
#include <vector>

class MapTriple : public MapGeneric{
  int f(int input);
  public:
    std::vector<int> map(std::vector<int> inputVector);
};

#endif // MAPTRIPLE_H