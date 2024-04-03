#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
double id,tc;// variavel  idade e tempo de contribuiçao
cout<<"digite a idade e o tempo de contribuiçao"<<endl;
cin>> id>> tc;
if (id>=60 && tc >=35)
    {
        cout<<"qualificado";
    }
     else if (id>=60 &&  tc>=30)
        {
            cout<<"qualificado";
        }
        else if(id<=60 && tc>=35)
        {
            cout<<"qualificado";
        }
    else
        cout<<"nao qualificado";
    return 0;
}
