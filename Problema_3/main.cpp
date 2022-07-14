#include <iostream>

using namespace std;

int tamano(char arreglo[]);
bool comparacion(char arreglo[], char arreglo2[], int len1);


int main()
{
   cout<<"Programa que compara dos cadenas de caracteres."<<endl;
   bool comp = 0;
   int len1 =0;
   int len2 =0;
   char array[30];
   cout<<"Ingrese la primer cadena de caracteres: ";
   cin>> array;
   char array2[30];
   cout<<"Ingrese la segunda cadena de caracteres: ";
   cin>> array2;

   len1 = tamano(array);
   len2 = tamano(array2);

   if(len1 == len2){
       comp = comparacion(array, array2, len1);
         if (comp == true){
               cout<<"Las cadenas de caracteres son iguales."<<endl;
           }
          else{
             cout<<"Las cadenas de caracteres no son iguales."<<endl;
          }
   }
   else{
       cout<<"Las cadenas de caracteres no son iguales."<<endl;
   }

 }



int tamano(char arreglo[]){
    int acum = 0;
    for(int i = 0;i<30;i++){
        if(arreglo[i] >= 48 && arreglo[i] <= 57){
            acum++;
        }
        else if(arreglo[i]>= 97 && arreglo[i] <= 122){
            acum++;
        }
        else if(arreglo[i]>= 65 && arreglo[i] <= 90){
            acum++;
        }
        else{
            break;
        }
    }
    return acum;
}

bool comparacion(char arreglo[], char arreglo2[],int len1){
    int acum = 0;
    bool igual;
    for(int i = 0; i< len1; i++){
        if(arreglo[i] == arreglo2[i]){
            acum++;
        }
    }
    igual = acum == len1;
    return igual;
}
