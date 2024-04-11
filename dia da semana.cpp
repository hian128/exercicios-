#include <iostream>
#include <cmath> // Para round e fmod
using namespace std;

int main() {
    int dia, mes, ano;
    do
    { cout << "Digite o dia, mes e ano: ";
         cin >> dia >> mes >> ano;
    }while(dia<=0 || mes<=0 || ano<=0);

    int a = (14 - mes) / 12;
    int m = mes + 12 * a - 3;
    int g = ano + 4800 - a;
    int f = m + 1;

    int delta;
    if (ano < 1700) {
        delta = 2;
    } else if (ano < 1850) {
        delta = 1;
    } else {
        delta = 0;
    }

    int n = int(365.25 * g) + int(30.6 * f) - 621049 + dia;
    double frac_part = fmod(n, 7);
    int ds = round(frac_part + delta) + 1;

    if (ds == 1) {
        cout << "Domingo" << endl;
    } else if (ds == 2) {
        cout << "Segunda-feira" << endl;
    } else if (ds == 3) {
        cout << "Terca-feira" << endl;
    } else if (ds == 4) {
        cout << "Quarta-feira" << endl;
    } else if (ds == 5) {
        cout << "Quinta-feira" << endl;
    } else if (ds == 6) {
        cout << "Sexta-feira" << endl;
    } else {
        cout << "Sabado" << endl;
    }

    return 0;
}
