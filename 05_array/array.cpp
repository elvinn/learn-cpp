/**
 * Compile: clang++ -std=c++2a -stdlib=libc++ -Wall -O3 array.cpp
 * -Wall: Warnings
 * -O3: Optimization level - Maximum
 */

#include <array>
#include <iostream>

using namespace std;

int main() {
  // language built-in array
  int arrA[3]{1, 2, 3};
  cout << "Access built-in array: ";
  for (int i = 0; i < 3; i++) {
    cout << arrA[i] << " ";
  }
  cout << endl;

  // container library array
  array<int, 3> arrB{1, 2, 3};
  cout << "Access container library array: ";
  for (int i = 0; i < arrB.size(); i++) {
    cout << arrB[i] << " ";
  }
  cout << endl;

  return 0;
}