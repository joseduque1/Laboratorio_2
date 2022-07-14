#include <iostream>

using namespace std;


int main()
{
    char arreglo[20];
    int acum = 0;
    int acum2 = 0;
    int sum=0;
    cout<<"Ingrese una palabra: ";
    cin.getline(arreglo, 20, '\n');

    for(int i=0;i<20;i++){

       for(int j=97;j<=122;j++){
           if(arreglo[i]==j){
               acum++;
           }
       }
   }
   char arreglo2[acum];
 cout<< "Original: "<<arreglo<<endl;
 cout<< "Sin repetir: ";
   for(int i=0;i<acum;i++){
       acum2 = 0;
       for(int j = 0;j<acum;j++){
           if(arreglo[i]== arreglo2[j]){
               acum2++;
           }
       }
       if(acum2==0){
            cout<<arreglo[i];
            arreglo2[sum]= arreglo[i];
            sum++;
               }
           }

    cout<<endl;
}
