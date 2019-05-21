/*
Write a recursive function  secondDigit   that could be called
as follows:

int main() {
  cout << secondDigit(7295) << endl;
  return 0;
}

This program should output 2.

*/

#include <iostream>
using namespace std;

int secondDigit(int x){
  if (x < 100) return x%10;
  return secondDigit(x/10);
}


int main() {
  cout << secondDigit(7295) << endl;
  return 0;
}
