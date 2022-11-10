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
	int arreglo[10];
	int buscar;
	int x;
	// Realizar un programa que cree un arreglo de 10 enteros cuyos valores son introducidos por el usuario. También debe pedir un valor que se deberá 
	// buscar en el arreglo. El algoritmo debe decir en cuál posición se encuentra el valor que queríamos buscar
	for (x=1;x<=10;x++) {
		cout << " Ingrese un numero: " << endl;
		cin >> arreglo[x-1];
	}
	for (x=1;x<=10;x++) {
		cout << arreglo[x-1] << endl;
	}
	return 0;
}

