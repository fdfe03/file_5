// Practical 5 ADDS: ReduceGCD
// Zemin Wong A1780385

#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include <vector>

class ReduceGCD{
  virtual int binaryOperator(int input1, int input2);
  public:
    virtual int reduce(std::vector<int> inputVector);
};

#endif // REDUCEGCD_H