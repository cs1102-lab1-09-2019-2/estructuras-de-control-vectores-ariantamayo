#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int moda(vector<int> &lista);
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

int moda(vector<int> &lista) {
    vector <int> frecuencia;
    while(true)
        for(int i = 0; i < lista.size(); i++){
        if (lista[i] == lista [i])
            frecuencia.push_back(lista[i]);
        else
            break;
      
    }
    return 0;
}

int main() {
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}
