#include "newProgramFunctions.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> userNums;

  loadVector(userNums);
  cout << "Size: " << userNums.size() << endl;
  displayValues(userNums);
}
