// Practical 5 ADDS: FilterOdd
// Zemin Wong A1780385

#include "FilterOdd.h"
#include <vector>
using namespace std;

bool FilterOdd::g(int input){
  return input % 2;
}

std::vector<int> FilterOdd::filter(std::vector<int> inputVector){
  int size = inputVector.size();
  vector<int> output;

  if (size == 1){
    if (this->g(inputVector.at(0))){
      output.push_back(inputVector.at(0));
    }
    return output;
    }else{
    int endValue = inputVector.back();
    inputVector.pop_back();
    output = this->filter(inputVector);
    if (this->g(endValue)){
      output.push_back(endValue);
    }
    return output;
  }
}