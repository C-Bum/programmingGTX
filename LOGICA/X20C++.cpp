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
	float asterisco;
	float columna;
	float fila;
	int lado;
	// Algoritmo que lea un número entero (lado) y a partir de él, cree un cuadrado 
	// de asteriscos con ese tamaño.
	cout << "Ingrese el tamaño del cuadrado que creara en base al lado que introduzca: " << endl;
	cin >> lado;
	for (asterisco=1;asterisco<=lado;asterisco++) {
		cout << "*";
	}
	cout << " " << endl;
	for (fila=1;fila<=lado-2;fila++) {
		cout << "*";
		for (columna=1;columna<=lado-2;columna++) {
			cout << " ";
		}
		cout << "*";
		cout << " " << endl;
	}
	for (asterisco=1;asterisco<=lado;asterisco++) {
		cout << "*";
	}
	return 0;
}

