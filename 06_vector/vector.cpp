/**
 * Compile: clang++ -std=c++2a -stdlib=libc++ -Wall -O3 vector.cpp
 * -Wall: Warnings
 * -O3: Optimization level - Maximum
 */

#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> a = {1, 2, 3};
  vector<int> b = {1, 2, 3};
  assert(a == b);

  vector<vector<int>> c = {{1, 2}, {3, 4}};
  vector<vector<int>> d = {{1, 2}, {3, 4}};
  assert(c == d);

  // Method One: visit by index
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << ',';
  }
  cout << endl;

  // Method Two: visit by iterator
  for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
    cout << *it << ',';
  }
  cout << endl;

  // Method Two: visit by iterator + auto type
  for (auto it = a.begin(); it != a.end(); it++) {
    cout << *it << ',';
  }
  cout << endl;

  // Method Three: syntax sugar `:`
  for (int &num : a) {
    cout << num << ',';
  }
  cout << endl;

  // Method Three: syntax sugar `:` + auto type
  for (auto num : a) {
    cout << num << ',';
  }
  cout << endl;

  return 0;
}