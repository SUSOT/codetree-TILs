#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << fixed;
    cin >> a >> b;
    cout.precision(1);
    cout << a + b << " " << (double)(a + b) / 2;
    return 0;
}