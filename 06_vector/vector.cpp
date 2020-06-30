// Compile: clang++ -std=c++2a -stdlib=libc++ -Wall -O3 vector.cpp -o vector.out
// -Wall: Warnings
// -O3: Optimization level - Maximum

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int main() {
  vector<int> a = {1, 2, 3};
  vector<int> b = {1, 2, 3};
  assert(a == b);

  vector<vector <int>> c = {{1, 2}, {3, 4}};
  vector<vector <int>> d = {{1, 2}, {3, 4}};
  assert(c == d);

  for(int i = 0; i < c.size(); i++) {
    cout << a[i] << ',';
  }
  cout << endl;
  
  for(vector<int>::iterator it = a.begin(); it != a.end(); it++) {
    cout << *it << ',';
  }

  return 0;
}