#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d;
    d = a + b + c;
    a = b = c = d;
    cout << a << " " << b << " " << c;
    return 0;
}