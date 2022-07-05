#include <iostream>

using namespace std;

int main()
{
    int cin_mil = 50000;
    int v_mil = 20000;
    int mil = 2000;
    int dos = 200;
    int resto = 0;
    int modulo = 0;
    int num = 0;
    cout << "Ingresa un numero entero: ";
    cin >> num;

    resto = num / cin_mil;
    num = num % cin_mil;

    cout << cin_mil << " : "<<resto<<endl;

    while(v_mil >= 5000){
        resto = num / v_mil;
        cout << v_mil << " : "<<resto<<endl;
        num = num%v_mil;
        v_mil = v_mil/2;
    }

    while(mil >= 500){
        resto = num / mil;
        cout << mil << " : "<<resto<<endl;
        num = num%mil;
        mil = mil/2;
    }
    while(dos >= 50){
        resto = num / dos;
        cout << dos << " : "<<resto<<endl;
        num = num%dos;
        dos = dos/2;
    }
    cout<< "faltante : "<<num<<endl;
}
