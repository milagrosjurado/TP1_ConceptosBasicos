#include<iostream>
using namespace std;

int main(){
	int nota1, nota2, nota3, promedio;
	
	cout << "Ingrese la primer nota:" << endl;
	cin >> nota1;
	cout << "Ingrese la segunda nota:" << endl;
	cin >> nota2;
	cout << "Ingrese la tercer nota:" << endl;
	cin >> nota3;
	
	promedio= (nota1+nota2+nota3)/3;
	
	if (promedio>=7){
		cout << "Aprobado";
	} else if (promedio>=4) {
		cout << "Regular";
	} else {
		cout << "Reprobado";
	}

	return 0;
}
