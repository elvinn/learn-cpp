/**
 * Compile: clang++ -std=c++2a -stdlib=libc++ -Wall -O3 class_basic.cpp
 * -Wall: Warnings
 * -O3: Optimization level - Maximum
 */

#include <iostream>

using namespace std;

class Rectangle {
  int width;
  int height;

public:
  Rectangle() : width(5), height(5) {}
  Rectangle(int x, int y) : width(x), height(y) {}

  int area() const { return width * height; }

  // override operator
  bool operator== (const Rectangle& rect) {
    return this->width == rect.width && this->height == rect.height;
  }

  // const member function
  string print() const {
    return "Rectange Width " + to_string(width) + ", Height " + to_string(height)
      + ", Area " + to_string(area());
  }
};

int main() {
  Rectangle rectA;
  // Rectangle rectA(); It is wrong with empty ()

  // functional form initialization
  Rectangle rectB(4, 5);

  // uniform initialization
  Rectangle rectC{4, 5};

  cout << "A: " << rectA.print() << endl;
  cout << "B: " << rectB.print() << endl;
  cout << "C: " << rectC.print() << endl;
  cout << "B == C is " << (rectB == rectC) << endl;

  return 0;
}