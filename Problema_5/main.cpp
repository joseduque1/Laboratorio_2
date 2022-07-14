#include <iostream>

using namespace std;

void cambio(int*, char *abc,int);
void print_abc(char *,int);


int main()
{
    int a = 0;
    int acum = 0;
    char abc[10];
    int num = 0;
    cout<<"Ingrese un numero entero: ";
    cin>> num;


    while(num>0){
        a = num%10;
        num = num/10;
        cambio(&a , abc, acum);
        acum++;

    }
    acum--;
    cout<<"Se retorna la cadena: ";
    print_abc(abc,acum);

}

void cambio(int *a, char *abc, int acum){
    abc[acum] = *a + 48;
}

void print_abc(char *abc, int acum){
    for(int i = acum; i>=0;i--){
        cout<<*(abc+i);

    }
    cout<<endl;

}


