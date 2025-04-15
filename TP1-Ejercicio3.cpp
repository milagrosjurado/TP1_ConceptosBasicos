 #include <iostream>
 using namespace std;
 
 void verificarMen10 (int n1, int n2, int n3){
 	if (n1<10 && n2<10 && n3<10){
 		cout << "Todos los numeros son menores a diez";
	 }
	 }
	 
int main() {
	int n1, n2, n3;
	cout << "Ingrese 3 numeros:" << endl;
	cin >> n1, n2, n3;
	
	verificarMen10 (n1, n2, n3);
	
	return 0;
}
