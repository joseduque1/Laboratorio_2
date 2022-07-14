#include <iostream>

using namespace std;

int main()
{
    unsigned int num = 0;
    cout<<"Ingresa un numero positivo: ";
    cin>> num;
    unsigned int acum = 0;
    unsigned int acum1 = 0;
    unsigned int acum2 = 0;


    for(int i = 1; i<num;i++){
        acum = 0;
        acum1 = 0;
        for(int j = 1; j<i;j++){
            if(i%j == 0){
                acum += j;
            }
        }
        if(acum != i){
                for(int k = 1; k<acum;k++){
                    if(acum % k == 0){
                        acum1 += k;
                    }
                }
                if(acum1 == i && acum1 < num){
                    if(i<acum ){
                        acum2 += (acum +i);
                    }
                }
        }
    }
    cout<< "El resultado de la suma es: "<<acum2<<endl;
}
