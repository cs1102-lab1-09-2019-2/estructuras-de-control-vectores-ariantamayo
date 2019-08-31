#include <iostream>
#include <stdexcept> //Validar en la division por 0
using std::cout;
using std::cin;
using std::invalid_argument;

void mostrarMenu();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);


void mostrarMenu() {
    cout<<"*****************\n";
    cout<<"                     MENU                          \n";
    cout<<"*****************\n";
    cout<<"  1.- Add\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  6.- Modulo\n";
}

int main() {
    char eleccion;
    int a,b;
    double resultado;
    while (true){
        mostrarMenu();
        cin>>eleccion;
        cin>>a>>b;
        switch (eleccion){
            case '1':
                resultado=a+b;
                cout<<resultado;
                break;
            case '2':
                resultado=a-b;
                cout<<resultado;
                break;
            case '3':
                resultado=a*b;
                cout<<resultado;
                break;
            case '4':
                resultado=a/b;
                cout<<resultado;
                break;
            case '5':
                resultado=a%b;
                cout<<resultado;
                break;
        }
        cout<<'\n';
        cout<<"Continuar? y";
        cin>>eleccion;
        if (eleccion!='y'){
            break;
        }
    }
    return 0;
}
