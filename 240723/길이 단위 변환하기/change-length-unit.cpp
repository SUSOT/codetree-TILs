#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    double a = 30.48;
    double b = 160934;

    cout.precision(1);
    cout << "9.2ft = " << 9.2 * a << "cm" << endl << "1.3mi = " << 1.3 * b << "cm";
    return 0;
}