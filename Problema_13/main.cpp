#include <iostream>
#define FILAS 6
#define COLUM 8

using namespace std;

int funcion(float* ptr);

int main()
{
    float num =0;
    float *ptr;
    float estrella[FILAS][COLUM] = {0,3,4,0,0,0,6,8,5,13,6,0,0,0,2,3,2,6,2,7,3,0,10,0,0,0,4,15,4,1,6,0,0,0,7,12,6,9,10,4,5,0,6,10,6,4,8,0};
    ptr = &(*(*(estrella+1)+1));
    num = funcion(ptr);
    cout<< num<<endl;

}

int funcion(float *ptr){
    float start = 0;
    int acum = 0;
    for(int i =1; i<=30;i++){
        start = (*(ptr) + *(ptr-8) + *(ptr-1) + *(ptr+1) + *(ptr+8))/5;
        if(start>6){
            acum++;
        }
         ptr += 1;
    }


   return acum;
}


