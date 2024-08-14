#include <iostream>
using namespace std;

int main() {
    int a, b, c;
cin >> a >> b >> c;
if(a < b && a < c)
{
    cout << "1" << " ";
}
else if (b > c)
{
	cout << (a == b) << " ";
}
else
{
	cout << (a == c) << " ";
}

cout << (a == b && a == c);
    return 0;
}