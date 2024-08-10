#include <iostream>
using namespace std;

int main() {
    float cm, m, kg;
    int bmi;
    cin>>cm>>kg;
    m=cm/100;
    bmi= kg/(m*m);  
    if(bmi >= 25)
    {
        cout << bmi << endl << "Obesity";
    }
    else
    {
         cout << bmi;
    }
    return 0;
}