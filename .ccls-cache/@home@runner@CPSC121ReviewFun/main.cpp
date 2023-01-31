#include <array>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void oneD() {
  int numbers[8];

  for (int i = 0; i < 5; i++) {
    numbers[i] = rand() % 100 + 1;
  }

  for (int j = 0; j < 5; j++) {
    cout << numbers[j] << " ";
  }
}

void twoD() {
  int table[4][5];

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      table[i][j] = rand() % 100 + 1;
    }
  }

  for (int k = 0; k < 4; k++) {
    for (int l = 0; l < 5; l++) {
      cout << table[k][l] << " ";
    }
    cout << "\n";
  }
}

int main() {
  srand(time(NULL));

  oneD();
  cout << "\n\n";
  twoD();
}
