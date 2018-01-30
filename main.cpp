
#include <iostream>
using namespace std;

int main() {
   int opc;
    int buscar;

    int array [100];

    for(int x = 0 ; x<=100; x++){
        array[x] = x;
    }


    cout<<"Ingrese valor\n";
    cin>>buscar;

    for(int i ; i<=100;i++) {
        if (array[i] == buscar) {
            cout << "Valor encontrado" ;
            return 0;
        }
    }

    cout << "No encontrado";

    


    return 0;
}