#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

float promedio(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    vector<int> valores;
    int num;
    while(true) {
        cin >> num;
        if(num != -1)
            valores.push_back(num);
        else
            break;
    }
    return valores;
}

float promedio(vector<int> &lista) {

    float suma = 0;
    for(int i = 0; i < lista.size(); i++){
        suma += lista[i];
    }
    return suma/lista.size();
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
}
