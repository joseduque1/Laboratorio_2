#include <iostream>

using namespace std;

int main()
{
    char array[20];
    cout<<"Ingrese una cadena numerica: ";
    cin >> array;
    int n;
    cout<<"En cuanto lo quiere separar: ";
    cin>> n;
    unsigned long int num=0;
    int acum2 =0;
    int acum = 0;
    int mod = 0;


    for(int i=0;i<20;i++){

       for(int j=48;j<=57;j++){
           if(array[i]==j){
               acum++;
           }
       }
   }

   int array_num[acum];

   for(int i=0;i<20;i++){

      for(int j=48;j<=57;j++){
          if(array[i]==j){
              array_num[i]= j-48;
          }
       }
    }
   acum2 = acum;
   for(int i=0;i<acum;i++){
       int num2=1;
       for(int j=acum2;j>1;j--){
           num2*=10;
       }
       acum2--;
       num += array_num[i]*num2;
    }
   acum2 = 1;
   for(int j=n;j>0;j--){
           acum2*=10;
       }
    acum = 0;
     cout<<"Original: "<<num<<endl;
    while(num>0){
        mod = num%acum2;
        num /= acum2;
        acum += mod;
        if (mod <1){
            acum += num;
        }

    }
    cout<<"Suma: "<< acum<<endl;
    }


