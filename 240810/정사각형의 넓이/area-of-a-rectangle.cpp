#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a;
    b = a * a;
    if(b < 5)
    {
        cout << b << "tiny";
    }
    else
    {
        cout << b;
    }
    return 0;
}