// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int i;
	int impares;
	int limite;
	int pares;
	// Diseñar un algoritmo que, dados 10 números naturales, indique cuántos de 
	// ellos son números pares, nos muestre estos y calcule la media aritmética de los impares
	cout << "ingrese los numeros que desea trabajar: " << endl;
	cin >> limite;
	for (i=1;i<=limite;i++) {
		if (i%2==0) {
			pares = pares+1;
		} else {
			impares = impares+1;
		}
	}
	cout << "Numeros pares: " << pares << endl;
	cout << "Numeros impares: " << impares << endl;
	return 0;
}

