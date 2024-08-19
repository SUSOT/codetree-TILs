#include <iostream>
using namespace std;

int main() {
    char a,b,c;
    int d,e,f;
    int count = 0;
    cin >> a >> d >> b >> e >> c >> f;
    if(d >= 37 && a == 'Y')
    {
        count++;
    }
    if(e >= 37 && b == 'Y')
    {
        count++;
    }
    if(f >= 37 && c == 'Y')
    {
        count++;
    }
    if(count >= 2)
    {
        cout << 'E';
    }
    else
    {
        cout << 'N';
    }
    return 0;
}