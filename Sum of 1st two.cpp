/*

Problem 290 --> Write a function called useRecursion that returns the sum of the first two digits in a positive
number. If there is only one digit, that digit is returned. For example, a program that uses the function
useRecursion follows.

int main() {
cout << useRecursion(567982) << endl; // prints 11
cout << useRecursion(107982) << endl; // prints 1
cout << useRecursion(7) << endl; // prints 7
return 0;
}

*/

#include <iostream>
using namespace std;

int useRecursion(int x) {
if (x < 100) return x % 10 + x / 10;
return useRecursion(x / 10);
}

int main() {
cout << useRecursion(567982) << endl; // prints 11
cout << useRecursion(107982) << endl; // prints 1
cout << useRecursion(7) << endl; // prints 7
return 0;
}
