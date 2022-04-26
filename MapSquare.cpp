// Practical 5 ADDS: MapSquare
// Zemin Wong A1780385

#include "MapSquare.h"
#include <vector>
using namespace std;

int MapSquare::f(int input){
  return input*input;
}

std::vector<int> MapSquare::map(std::vector<int> inputVector){
  int size = inputVector.size();
  vector<int> output;

  if (size == 1) {
    output.push_back(this->f(inputVector.at(0)));
    return output;
  } else {
    int endValue = inputVector.back();
    inputVector.pop_back();
    output = this->map(inputVector);
    output.push_back(this->f(endValue));
    return output;
  }
}