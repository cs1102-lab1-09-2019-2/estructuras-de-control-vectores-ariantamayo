#include<iostream>
#include<vector>
using namespace std;
int mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    
    vector<int> elementos;
    int numero;
    do {
        cout << "Ingrese un entero positivo, escriba -1 si ya no quiere ingresar mas numeros:";
        cin >> numero;
        elementos.insert(elementos.end(), numero);

    } while (numero != -1);
    return elementos;
}


int mediana(vector<int> &lista) {
  
    int null,a,b;
    if(lista.size()%2==0){
        a=lista[lista.size()/2];
        b=lista[(lista.size()/2)-1];
        null=(a+b)/2;
    }
    else{
        null=lista[(lista.size()-1)/2];
    }
    return null;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
    return 0;
}
