#include "newProgramFunctions.h"
#include <iostream>
#include <vector>
using namespace std;

// a new comment that adds nothing
// another comment to represent a change
int main() {
  vector<int> userNums;

  loadVector(userNums);
  cout << "Size: " << userNums.size() << endl;
  displayValues(userNums);
}
