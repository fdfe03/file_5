// Practical 5 ADDS: MapAbsoluteValue
// Zemin Wong A1780385

#include "MapAbsoluteValue.h"
#include <cmath>
#include <vector>
using namespace std;

int MapAbsoluteValue::f(int input){
  return abs(input);
}

std::vector<int> MapAbsoluteValue::map(std::vector<int> inputVector){
  int size = inputVector.size();
  vector<int> output;

  if (size == 1){
    output.push_back(this->f(inputVector.at(0)));
    return output;
    }else{
    int endValue = inputVector.back();
    inputVector.pop_back();
    output = this->map(inputVector);
    output.push_back(this->f(endValue));
    return output;
  }
}