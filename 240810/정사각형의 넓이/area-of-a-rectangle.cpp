#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a;
    b = a * a;
    if(a < 5)
    {
        cout << b << endl << "tiny";
    }
    else
    {
        cout << b;
    }
    return 0;
}