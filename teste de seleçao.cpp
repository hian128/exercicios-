#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0)
	{
	cout << "valores aceitos" << endl;
	}
	
	 else
	 {
		 cout << "valores nao aceitos" << endl;
	 }

return 0;
}
