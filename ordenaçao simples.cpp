#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Digite o primeiro valor: ";
    cin >> a;
    cout << "Digite o segundo valor: ";
    cin >> b;
    cout << "Digite o terceiro valor: ";
    cin >> c;

    
int menor, meio, maior;

    if (a <= b && a <= c)
     {
        menor = a;
        if (b <= c) 
        {
            meio = b;
            maior = c;
        } 
        else {

            meio = c;
            maior = b;
        }
    } 
    else if (b <= a && b <= c) 
    {
        menor = b;
        if (a <= c) 
        {
            meio = a;
            maior = c;
        } 
        else 
        {
            meio = c;
            maior = a;
        }
    } 
    else 
    {
        menor = c;
        if (a <= b)
         {
            meio = a;
            maior = b;
        } 
        else 
        {
            meio = b;
            maior = a;
        }
    }
    
    
    cout << "Valores em ordem crescente: " <<endl<< menor << endl << meio << endl << maior << endl;

    
    cout << endl;

    cout << "Valores na sequencia original: "<< endl<< a << endl<< b << endl << c << endl;

    return 0;
}
