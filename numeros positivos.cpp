#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
//variaveis 
int a,b,c,d,e,f,i;
int valores[6],positivos=0;
//entrada de dados
cout<<"digite 6 numeros"<<endl;
for(i=0;i<6;i++)
{
    cin>>valores[6];
    if(valores[6]>0)
    positivos++;

}
//saida de dados  
cout<< positivos << " valores positivos" <<endl;

    return 0;
}
