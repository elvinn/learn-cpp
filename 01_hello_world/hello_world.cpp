// Compile: clang++ -std=c++2a -stdlib=libc++ -Wall -O3 hello_world.cpp -o hello_world.out
// -Wall: Warnings
// -O3: Optimization level - Maximum

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    return 0;
}