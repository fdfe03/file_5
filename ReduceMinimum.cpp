// Practical 5 ADDS: ReduceMinimum
// Zemin Wong A1780385

#include "ReduceMinimum.h"
#include <vector>
using namespace std;

int ReduceMinimum::binaryOperator(int input1, int input2){
  return (input1 < input2) ? input1 : input2;
}

int ReduceMinimum::reduce(std::vector<int> inputVector){
  if (inputVector.size() == 2){
    return this->binaryOperator(inputVector.at(0), inputVector.at(1));
    }else{
    int endValue = inputVector.back();
    inputVector.pop_back();
    int highValue = this->reduce(inputVector);
    return this->binaryOperator(endValue, highValue);
  }
}