#include <iostream>
using namespace std;

int main() {
    int a,c;
    char b,d;
    cin >> a >> b >> c >> d;
    if(a >= 19 && b == 'M')
    {
        cout << 1;
    }
    else if(c >= 19 && d == 'M')
    {
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}