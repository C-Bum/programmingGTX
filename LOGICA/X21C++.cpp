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
	int altura;
	int asterisco;
	float asterisco_linea;
	float espacio;
	float espacio_linea;
	float linea;
	// Algoritmo que lea un número entero (altura) y a partir de él, cree una 
	// escalera invertida de asteriscos con esa altura. Deberá quedar así, si 
	// ponemos una altura de 5.
	cin >> altura;
	asterisco = altura;
	espacio = 0;
	for (linea=1;linea<=altura;linea++) {
		for (espacio_linea=0;espacio_linea<=espacio;espacio_linea++) {
			cout << " ";
		}
		for (asterisco_linea=1;asterisco_linea<=asterisco;asterisco_linea++) {
			cout << "*";
		}
		asterisco = asterisco-1;
		espacio = espacio+1;
		cout << " " << endl;
	}
	return 0;
}

