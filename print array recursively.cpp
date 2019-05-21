#include <iostream>
using namespace std;



void recursive(int x[][3], int r) {
if (r == 0) {
  cout << endl;
  return;
  }
  cout << x[r - 1][r - 1];
  recursive(x, r - 1);
}

int main() {
int x[3][3] = {{3, 1, 4}, {1, 5, 9}, {2, 6, 5}};

recursive(x,3); // prints 553
}
