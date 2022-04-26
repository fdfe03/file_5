// Practical 5 ADDS: MapTriple
// Zemin Wong A1780385

#include "MapTriple.h"
#include <vector>
using namespace std;

int MapTriple::f(int input){
  return 3 * input;
}

std::vector<int> MapTriple::map(std::vector<int> inputVector){
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