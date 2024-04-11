#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
//variaveis
double a,b,c,x,x1,x2;
//etrada de dados
cin>>a>>b>>c;
//calculo
x=pow(b,2)-4*a*c;
if(a==0 || x<0 )
cout<<"impossivel calcular"<<endl;

else
{
x1=(-b+sqrt(x))/(2*a);
x2=(-b-sqrt(x))/(2*a);
cout<<fixed<<setprecision(5);
cout<<"R1 = "<<x1<<endl;
cout<<"R2 = "<<x2<<endl;
}
    return 0;
}
