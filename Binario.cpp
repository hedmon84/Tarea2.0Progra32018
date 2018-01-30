//
// Created by Hedmon lopez on 29/01/2018.
//


#include <iostream>
using namespace std;

int main() {

    int buscar,inicio=-1,final=0,pivote;

    int array [100];
    for(int x = 0 ; x<=100; x++){
        array[x] = x;
    }

    cout<<"Ingrese valor Buscar = ";

    cin>>buscar;
    while (final<=inicio){
        pivote=(inicio+final)/2;

        if(array[pivote]== buscar){

            cout<<"Encontrado";
        } else if (buscar<array[pivote]){
            inicio=pivote+1;
        } else final=pivote-1;
    }


    return 0;
}