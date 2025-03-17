#include <iostream>
#include "FloatRange.h"

using namespace std;

double FloatRange::GetFirst() const {return first;}
double FloatRange::GetSecond() const {return second;}

bool FloatRange::SetFirst(double first) {
  this->first = first;
  return true;
}

bool FloatRange::SetSecond(double second) {
  if (second < first) {
    return false;
  }
  this->second = second;
  return true;
}

void FloatRange::Init() {
  first = 0;
  second = 0;
  Read();
}

void FloatRange::Read() {
  double tempFirst, tempSecond;

  cout << "Enter the first number: ";
  cin >> tempFirst;
  SetFirst(tempFirst);

  do {
    cout << "Enter the second number: ";
    cin >> tempSecond;
    if (!SetSecond(tempSecond)) {
      cout << "Failed to set the second number. It must be greater than or equal to the first number." << endl;
    }
  } while (tempSecond < first);
}


bool FloatRange::rangeCheck(double value) const {
  return value >= first && value <= second;
}