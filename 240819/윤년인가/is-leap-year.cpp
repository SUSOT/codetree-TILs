#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if((a % 100 == 0 && a % 400 != 0) && a % 4 != 0)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
    return 0;
}