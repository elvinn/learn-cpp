/**
 * Compile: clang++ -std=c++2a -stdlib=libc++ -Wall -O3 basic_io.cpp
 * -Wall: Warnings
 * -O3: Optimization level - Maximum
 */

#include <iostream>
#include <sstream>

using namespace std;

int main() {
  string name;
  string str;
  int age;

  cout << "What is your name?\n";

  // use getline to avoid space split
  getline(cin, name);

  cout << "What is your age?\n";
  getline(cin, str);
  // use stringstream to conver string to number
  stringstream(str) >> age;

  cout << "Hello " << name << ". Your age is " << age << ".\n";
  return 0;
}
