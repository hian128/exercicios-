#include <iomanip>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int c,q;
double v;
cout<<"digite o codigo e a quantidade do item"<<endl;
cin>>c>>q;
if(c==1)
v=4*q;
else if (c==2)
v=4.50*q;
else if (c==3)
v= 5*q;
else if (c==4)
v= 2*q;
else if (c==5)
v=1.50*q;
cout<<fixed<<setprecision(2);
cout<<" Total: R$ "<<v;

    return 0;
}
