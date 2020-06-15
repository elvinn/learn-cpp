// Compile: clang++ -std=c++2a -stdlib=libc++ -Wall -O3 variables.cpp -o variables.out
// -Wall: Warnings
// -O3: Optimization level - Maximum

#include <iostream>
#include <string>

using namespace std;

int main ()
{
  // initialization
  int a = 5; // c-like initialization 
  int b (3); // constructor initialization 
  int c {2}; // uniform initialization, since c++11

  cout << a + b + c << endl;

  // type deduction: auto and decltype
  int d = 1;
  auto e = d;
  decltype(d) f = 3;

  cout << d + e + f << endl;

  // explicit type casting operator
  int i;
  float f = 3.14;
  // both ways are valid
  i = (int) f;
  i = int (f);
  cout << i << endl;

  // string
  string sectionString = "This is the variables section.";
  cout << sectionString << endl;

  return 0;
}