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
	int ano;
	int año;
	// Algoritmo que, dado un año, nos diga si es bisiesto o no. Un año es bisiesto 
	// bajo las siguientes condiciones:
	// ? Un año divisible por 4 es bisiesto y no debe ser divisible entre 100.
	// ?Si un año es divisible entre 100 y además es divisible entre 400, también 
	// resulta bisiesto.
	// ?NOTA: este ejercicio tiene muchas formas de hacerlo.
	cout << "Introduce un año: " << endl;
	cin >> ano;
	if ((ano%4==0 && ano%100!=0)) {
		cout << "El año " << ano << " es bisiesto" << endl;
	} else {
		if ((ano%400==0 && ano%100==0)) {
			cout << "El año " << ano << " es bisiesto" << endl;
		} else {
			cout << "El año " << ano << " no es bisiesto" << endl;
		}
	}
	return 0;
}

