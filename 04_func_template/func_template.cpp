// Compile: clang++ -std=c++2a -stdlib=libc++ -Wall -O3 func_template.cpp -o func_template.out
// -Wall: Warnings
// -O3: Optimization level - Maximum

#include <iostream>

using namespace std;

template <class T>
T sum(T a, T b) {
  T result = a + b;
  return result;
}

template <class T, class U>
bool are_equal(T a, U b) {
  return a == b;
}

// determine on compile-time
template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}

int main()
{
  int a = 1, b = 2;
  int c = sum<int>(a, b);

  cout << c << endl;

  int e = 10;
  float f = 10.0;

  // ignore type of e, f is ok
  cout << are_equal(e, f) << endl;

  int g = 100;
  cout << fixed_multiply<int, 2>(g) << endl;
  cout << fixed_multiply<int, 3>(g) << endl;

  return 0;
}
