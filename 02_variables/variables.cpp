/**
 * Compile: clang++ -std=c++2a -stdlib=libc++ -Wall -O3 variables.cpp
 * -Wall: Warnings
 * -O3: Optimization level - Maximum
 */

#include <iostream>
#include <string>

using namespace std;

// static storage (such as global variables)
// are automatically initialized to zeroes.
int globale_x;

int main() {
  // automatic storage (such as local variables)
  // are uninitialized and have an undetermined value
  int local_y;
  cout << "globale_x: " << globale_x << ", local_y: " << local_y << endl;

  // initialization
  int a = 5; // c-like initialization
  int b(3);  // constructor initialization
  int c{2};  // uniform initialization, since c++11

  cout << a + b + c << endl;

  // type deduction: auto and decltype
  int d = 1;
  auto e = d;
  decltype(d) f = 3;

  cout << d + e + f << endl;

  // explicit type casting operator
  int i;
  float g = 3.14;
  // both ways are valid
  i = (int)g;
  i = int(g);
  cout << i << endl;

  // string
  string sectionString = "This is the variables section.";
  cout << sectionString << endl;

  unsigned int uin = 123;
  string uinString = "Hello " + to_string(uin);
  cout << uinString << endl;

  return 0;
}