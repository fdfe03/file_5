// Practical 5 ADDS: MapGeneric
// Zemin Wong A1780385

#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>

class MapGeneric{
  virtual int f(int) = 0;
  public:
    virtual std::vector<int> map(std::vector<int>) = 0;
};

#endif // MAPGENERIC_H