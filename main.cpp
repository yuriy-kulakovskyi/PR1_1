#include <iostream>
#include "./classes/FloatRange.h"

using namespace std;

int main() {
  FloatRange range;
  range.Init();

  range.rangeCheck(100) ? cout << "Number is in range" << endl : cout << "Number is not in range" << endl;
  range.rangeCheck(200) ? cout << "Number is in range" << endl : cout << "Number is not in range" << endl;

  return 0;
}