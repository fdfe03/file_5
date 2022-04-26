// Practical 5 ADDS: FilterForTwoDigitalPositive
// Zemin Wong A1780385

#include "FilterForTwoDigitPositive.h"
#include <vector>

using namespace std;

bool FilterForTwoDigitPositive::g(int input){
  return input > 9 && input < 100;
}

std::vector<int> FilterForTwoDigitPositive::filter(std::vector<int> inputVector){
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
    if(this->g(endValue)){
      output.push_back(endValue);
    }
    return output;
  }
}