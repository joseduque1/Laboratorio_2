#include <iostream>

using namespace std;

void interseccion(int *rectangulo1, int *rectangulo2, int *rectangulo3);
void print_rect(int *rectangulo3);

int main()
{
    cout << "Interseccion entre un par de rectangulos. " << endl;
    int coordx = 0;
    cout<< "Ingresa las coordenada en x del primer rectangulo: ";
    cin>> coordx;
    int coordy = 0;
    cout<< "Ingresa las coordenada en y del primer rectangulo: ";
    cin>> coordy;
    int ancho = 0;
    cout<< "Ingresa el ancho del primer rectangulo: ";
    cin>> ancho;
    int altura = 0;
    cout<< "Ingresa la altura del primer rectangulo: ";
    cin>> altura;
    int coordx2 = 0;
    cout<< "Ingresa las coordenada en x del segundo rectangulo: ";
    cin>> coordx2;
    int coordy2 = 0;
    cout<< "Ingresa las coordenada en y del segundo rectangulo: ";
    cin>> coordy2;
    int ancho2 = 0;
    cout<< "Ingresa el ancho del segundo rectangulo: ";
    cin>> ancho2;
    int altura2 = 0;
    cout<< "Ingresa la altura del segundo rectangulo: ";
    cin>> altura2;


    int rectangulo1[4] = {coordx,coordy,ancho,altura};
    int rectangulo2[4] = {coordx2,coordy2,ancho2,altura2};
    int rectangulo3[4];
    interseccion(rectangulo1, rectangulo2, rectangulo3);
    if(rectangulo3[2]> 0 && rectangulo3[3]>0){
         print_rect(rectangulo3);
     }
    else{
        cout<<"La interseccion de los rectangulos no forman otro rectangulo."<<endl;
    }
}

void interseccion(int *rectangulo1, int *rectangulo2, int *rectangulo3){
    int medida1 =*rectangulo1 + *(rectangulo1+2);
    int medida2 =  *rectangulo2 + *(rectangulo2+2);

    if(*rectangulo1 > *rectangulo2){
        *rectangulo3 = *rectangulo1;

        if( medida1 > medida2){
            *(rectangulo3+2) = medida2 - *rectangulo1; //cuando no hay interseccion
        }
        else{
            *(rectangulo3+2) = medida1 - *rectangulo1;
        }
    }
    else{
        *rectangulo3 = *rectangulo2;
        if( medida1 > medida2){
            *(rectangulo3+2) = medida2 - *rectangulo2; //cuando no hay interseccion
        }
        else{
            *(rectangulo3+2) = medida1 - *rectangulo2;
        }
    }

    medida1 = *(rectangulo1+1) - *(rectangulo1+3);
    medida2 =  *(rectangulo2+1) - *(rectangulo2+3);

    if(*(rectangulo1+1)>*(rectangulo2+1)){

        *(rectangulo3+1) = *(rectangulo2+1);

        if(medida1 < medida2){
            *(rectangulo3+3) = *(rectangulo2+1) - medida2;
        }
        else{
            *(rectangulo3+3) = *(rectangulo2+1) - medida1;
        }



    }
    else{
        *(rectangulo3+1) = *(rectangulo1+1);

        if(medida1 < medida2){
            *(rectangulo3+3) = *(rectangulo1+1) - medida2;
        }
        else{
            *(rectangulo3+3) = *(rectangulo1+1) - medida1;
        }

    }
}






void print_rect(int *rectangulo3){
    cout<<"El rectangulo interseccion es { ";
    for(int i = 0;i<4;i++){
        cout<<rectangulo3[i]<<" ";
    }
    cout<<"}";

}
