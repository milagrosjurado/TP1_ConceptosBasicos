#include <iostream>
using namespace std;

void evaluarNivel(float porcentaje){
	if (porcentaje>=90) {
        cout << "Nivel maximo" << endl;
    } else if (porcentaje>=75 && porcentaje<90) {
        cout << "Nivel medio" << endl;
    } else if (porcentaje>=50 && porcentaje<75) {
        cout << "Nivel regular" << endl;
    } else {
        cout << "Fuera de nivel" << endl;
    }
}

void mostrarPorcentaje(float porcentaje) {
    cout << "Porcentaje de respuestas correctas: " << porcentaje << "%" << endl;
}

int main() {
    int total, correctas;

    cout << "Ingrese el total de preguntas: " << endl;
    cin >> total;
    cout << "Ingrese la cantidad de respuestas correctas: " << endl;
    cin >> correctas;

    float porcentaje = (float)correctas / total * 100;

    mostrarPorcentaje(porcentaje);
    evaluarNivel(porcentaje);

    return 0;
}
