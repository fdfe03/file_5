// Practical 5 ADDS: ReduceGCD
// Zemin Wong A1780385

#include "ReduceGCD.h"
#include <vector>
using namespace std;

int ReduceGCD::binaryOperator(int input1, int input2){
  return input2 == 0 ? input1 : this->binaryOperator(input2, input1 % input2); 
}

int ReduceGCD::reduce(std::vector<int> inputVector){
  if (inputVector.size() == 2){
    return this->binaryOperator(inputVector.at(0), inputVector.at(1));
    }else{
    int endValue = inputVector.back();
    inputVector.pop_back();
    int highValue = this->reduce(inputVector);
    return this->binaryOperator(endValue, highValue);
  }
}