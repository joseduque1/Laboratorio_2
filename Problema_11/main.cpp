#include <iostream>
#define FILAS 15
#define ASIENTOS 20

using namespace std;

void asientos_disponibles(char cine[][ASIENTOS]);
void reservas(char cine[][ASIENTOS], char , int );
void cancelar(char cine[][ASIENTOS], char fila, int asiento);

int main()
{
    cout<< "SISTEMA DE SALA DE CINE."<<endl<<endl;
    int opcion = 0;
    char cine[FILAS][ASIENTOS];


    for(int i = 0;i<FILAS;i++){
        for(int j =0; j<ASIENTOS;j++){
            cine[i][j] = '+';
        }

    }
    do{

        cout<< "1. Ver asientos disponibles. "<<endl;
        cout<< "2. Reservar asientos. "<<endl;
        cout<< "3. Cancelar reserva. "<<endl;
        cout<< "4. Salir. "<<endl;
        cout<< "Ingrese el numero de la tarea que desea realizar: ";
        cin>> opcion;


        if(opcion == 1){
            asientos_disponibles(cine);

        }
        else if(opcion == 2){
            cout<<"Los puestos se reservan por filas que van de (A-O) y por asientos del (1-20). "<<endl;
            cout<< "Cual es el puesto que desea reservar. ";
            char fila;
            cout<<"Ingrese la fila: ";
            cin>> fila;
            int asiento = 0;
            cout<<"Ingrese el asiento: ";
            cin>> asiento;
            reservas(cine, fila, asiento);

        }
        else if(opcion == 3){
            cout<< "Cual es el puesto que desea cancelar. ";
            char fila;
            cout<<"Ingrese la fila: ";
            cin>> fila;
            int asiento = 0;
            cout<<"Ingrese el asiento: ";
            cin>> asiento;
            cancelar(cine,fila,asiento);

        }
        else if(opcion > 4){
            cout<<"Opcion incorrecta seleccione una opcion valida: ";
            cin>> opcion;
        }

    }
    while( opcion != 4);
}

void asientos_disponibles(char cine[][ASIENTOS]){
    char fil = 'A';
    cout<<' ';
    for (int i = 1; i<21;i++){
        cout<<'|'<<i;
    }
    cout<<'|'<<endl;

    for(int i = 0;i<FILAS;i++){

        cout<<fil;
        fil +=1;

        for(int j =0; j<ASIENTOS;j++){

            if(j>= 9){
            cout<<'|'<<cine[i][j]<<' ';
            }
            else{
                cout<<'|'<<cine[i][j];
            }
        }
        cout<<'|'<<endl;

    }
}


void reservas(char cine[][ASIENTOS], char fila , int asiento){
    int num = 0;
    for(int i = 65; i<=79;i++){
        if(fila == i){
            num = fila-65;
            if(cine[num][asiento-1] == '-'){
                cout<<"Asiento reservado. "<<endl;
                cout<<"Ingrese una nueva fila: ";
                cin>> fila;
                cout<<"Ingrese un nuevo asiento: ";
                cin>> asiento;
                i=65;
            }
            else{
                cine[num][asiento-1] = '-';
                break;
            }

        }
    }
    for(int i = 97; i<=111;i++){
        if(fila == i){
            num = fila-97;
            if(cine[num][asiento-1] == '-'){
                cout<<"Asiento reservado. "<<endl;
                cout<<"Ingrese una nueva fila: ";
                cin>> fila;
                cout<<"Ingrese un nuevo asiento: ";
                cin>> asiento;
                i = 97;
            }
            else{
                cine[num][asiento-1] = '-';
                break;
            }
        }
    }
}

void cancelar(char cine[][ASIENTOS], char fila, int asiento ){
    int num = 0;
    for(int i = 65; i<=79;i++){
        if(fila == i){
            num = fila-65;
            if(cine[num][asiento-1] == '+'){
                cout<<"Asiento sin reserva. "<<endl;
                cout<<"¿Desea reservarlo?"<<endl<<"1. Si"<<endl<<"2. No"<<endl;
                int si = 0;
                cout<<"Ingrese el numero segun corresponda su respuesta: ";
                cin>> si;
                if(si == 1){
                    reservas(cine, fila, asiento);
                }
                else{
                    break;
                }
            }
            else{
                cine[num][asiento-1] = '+';
                break;
            }

        }
    }
    for(int i = 97; i<=111;i++){
        if(fila == i){
            num = fila-97;
            if(cine[num][asiento-1] == '+'){
                cout<<"Asiento sin reserva. "<<endl;
                cout<<"¿Desea reservarlo?"<<endl<<"1. Si"<<endl<<"2. No"<<endl;
                int si = 0;
                cout<<"Ingrese el numero segun corresponda su respuesta: ";
                cin>> si;
                if(si == 1){
                    reservas(cine, fila, asiento);
                }
                else{
                    break;
                }
            }
            else{
                cine[num][asiento-1] = '+';
                break;
            }
        }
    }

}
