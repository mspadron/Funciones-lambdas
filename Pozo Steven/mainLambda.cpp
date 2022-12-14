//funciones lambda

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm> //bliblioteca para usar for_each
#include <string>

using namespace std;

int main() {

    //IMPRIMIR NOMBRES
    vector<string> nombre={"Steven", "Maria", "Carlos", "Daniel", "Fabiana"};
    auto lista_nombre=[](const string & lista){cout<<"El nombre de la persona es: "<<lista<<"\n";};
    for_each(nombre.begin(), nombre.end(),lista_nombre);
    
    cout<<"****************************************************************************************"<<endl;

    //IMPRIMIR NUMEROS IMPARES O PARES
    vector<int> numeros{14,20,32,4,50,63,72};
    for_each(numeros.begin(), numeros.end(), [](int num){
        if(num%2==0){
            cout<<"El numero "<<num<<" es par \n";
        }else{
            cout<<"El numero "<<num<<" es impar \n";
        }
    });
    return 0;
}