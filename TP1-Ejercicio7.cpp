#include <iostream>
using namespace std;

double consultarSaldo (double saldo){
	cout << "Su saldo actual es: $" << saldo;
	return saldo;
}

double ingresarDinero (double saldo){
	double monto;
	cout << "Ingrese el monto a depositar: $";
	cin >> monto;
	saldo += monto;
	cout << "Su saldo actualizado es: $" << saldo << endl;
	return saldo;
}

double retirarDinero (double saldo){
	double monto;
	cout << "Ingrese el monto a retirar: $";
	cin >> monto;
	
	while (monto>saldo){
		cout << "Monto insuficiente. Ingrese un monto valido: $";
		cin >> monto;
	}
	
	saldo -= monto;
	cout << "Retiro exitoso. Saldo restante: $" << saldo << endl;
	return saldo;
}

int main (){
	double saldo = 10000;
	int opcion;
	
	do {
		cout << "\n CAJERO AUTOMATICO" << endl;
		cout << "1. Consultar saldo." << endl;
		cout << "2. Depositar dinero." << endl;
		cout << "3. Retirar dinero." << endl;
		cout << "4. Salir." << endl;
		cout << "Seleccione una opcion:";
		cin >> opcion;
		
		switch (opcion){
			case 1:
				saldo = consultarSaldo(saldo);
				break;
			case 2:
				saldo = ingresarDinero(saldo);
				break;
			case 3:
				saldo = retirarDinero(saldo);
				break;
			case 4:
				cout << "Gracias por usar el cajero." << endl;
				break;
			default:
				cout << "Opcion invalida." << endl;
				cout << "Intente de nuevo." << endl;		
		}
		
	if  (opcion !=4){
	cout << endl;
	}
		
	} while (opcion !=4);
	
	return 0;
}
