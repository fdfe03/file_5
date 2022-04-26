// Practical 5 ADDS: ReduceGeneric
// Zemin Wong A1780385

#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>

class ReduceGeneric{
  virtual int binaryOperator(int, int) = 0;
  public:
    virtual int reduce(std::vector<int>) = 0;
};

#endif // REDUCEGENERIC_H