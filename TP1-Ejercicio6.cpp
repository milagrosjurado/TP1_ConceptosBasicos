#include <iostream>
using namespace std;

void calcularPago(int cantidadEntradas, int valorEntrada){
	if(cantidadEntradas<1 || cantidadEntradas>4){
		cout << "Solo se permite hasta 4 entradas por persona." << endl;
		return;
	}

float total = cantidadEntradas*valorEntrada;
float descuento=0;

if (cantidadEntradas==2){
	descuento = 0.10;
} else if (cantidadEntradas==3){
	descuento = 0.15;
} else if (cantidadEntradas==4){
	descuento = 0.20;
}

float precioFinal = total*(1-descuento);

if (descuento>0){
	cout << "Descuento aplicado: " << descuento*100 << "%" << endl;
} else {
	cout << "No hay descuento disponible." << endl;
}

cout << "Total a pagar: $" << precioFinal << endl;
}


int main() {
	int cantidadEntradas;
	int valorEntrada = 100;
	
	cout << "Selecciona la cantidad de entradas (4 Max.): ";
	cin >> cantidadEntradas;
	
	calcularPago(cantidadEntradas, valorEntrada);
	
	return 0;
}
