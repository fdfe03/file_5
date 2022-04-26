// Practical 5 ADDS: ReduceMinimum
// Zemin Wong A1780385

#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H

#include <vector>

class ReduceMinimum{
  virtual int binaryOperator(int input1, int input2);
  public:
    virtual int reduce(std::vector<int> inputVector);
};

#endif // REDUCEMINIMUM_H