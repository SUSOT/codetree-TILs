#include <iostream>
using namespace std;

int main() {
    int a,b;
    double c;
    cin >> a >> b;
    cout << fixed;
    cout.precision(2);
    c = (double)(a + b) / (a - b);
    cout << c;
    return 0;
}