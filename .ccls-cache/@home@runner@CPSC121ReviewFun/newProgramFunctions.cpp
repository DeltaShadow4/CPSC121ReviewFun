#include "newProgramFunctions.h"
#include <iostream>
#include <vector>
using namespace std;

// a new comment that adds nothing to the code
// loads the vector with 10 inputs from the user
void loadVector(vector<int> &vec) {
  int num;
  for (int i = 0; i < 10; i++) {
    cout << "Please enter a int: ";
    cin >> num;
    vec.push_back(num);
  }
}

// finds the biggest value in the vector
int largestValueinVector(vector<int> vec) {
  // largest will be assigned first value in vector as starting point for
  // comparison
  int i, largest = vec[0], temp;
  for (i = 0; i < 10; i++) {
    temp = vec[i];
    if (temp > largest) {
      largest = temp;
    }
  }
  return largest;
}

// finds the smallest value in the vector
int smallestValueinVector(vector<int> vec) {
  // smallest will be assigned first value in vector as starting point for
  // comparison
  int i, smallest = vec[0], temp;
  for (i = 0; i < 10; i++) {
    temp = vec[i];
    if (temp < smallest) {
      smallest = temp;
    }
  }
  return smallest;
}

// displays the largest and smallest values in the vector
void displayValues(vector<int> vec) {
  cout << "The largest value in the vector is: " << largestValueinVector(vec)
       << endl;
  cout << "The smallest value in the vector is: " << smallestValueinVector(vec)
       << endl;
}
