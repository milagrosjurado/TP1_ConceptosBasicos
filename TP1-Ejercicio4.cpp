#include <iostream>
using namespace std;

int contCifras(int num){
	if (num<10)
		return 1;
	else if (num<100)
		return 2;
	else if (num<1000) 
		return 3;
	else
	return -1;
	}

int main (){
	int num;
	cout << "Ingresar un numero positivo de hasta 3 cifras" << endl;
	cin >> num;
	
	if (num<0){
		cout << "ERROR. El numero debe ser positivo"<< endl;
	}
	
	else {
        int cifras = contCifras(num);
        
        if (cifras==1)
            cout << "El numero tiene 1 cifra";
        else if (cifras==2)
            cout << "El numero tiene 2 cifras";
        else if (cifras==3)
            cout << "El numero tiene 3 cifras";
        else
            cout << "ERROR. EL numero tiene mas de 3 cifras";
    }

	return 0;
}
