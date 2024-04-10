#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double x,y;
cout<<"escreva as coordenadas"<<endl;
cin>>x>>y;
if(x>0 && y<0)
cout<<"q4";
else if (x>0 && y>0)
cout<<"q1";
else if (x<0 && y<0)
cout<<"q3";
else if (x<0 && y>0)
cout<<"q2";
else if (x==0  && y==0)
cout<<"origem";
else if (x==0)
cout<<"eixo x";
else if (y==0)
cout<<"eixo y";

    return 0;
}
