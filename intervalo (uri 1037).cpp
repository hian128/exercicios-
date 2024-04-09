#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cin >> x;
    if (x >= 0 && x <= 25)
        cout << "intervalo [0,25]";
    else if (x > 25 && x <= 50)
        cout << "intervalo (25,50]";
    else if (x > 50 && x <= 75)
        cout << "intervalo (50,75]";
    else if (x > 75 && x <= 100)
        cout << "intervalo (75,100]";
    else
        cout << "fora de intervalo";

    return 0;
}
