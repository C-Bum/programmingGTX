// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se ley� otra variable con >>.

int main() {
	int ano;
	int a�o;
	// Algoritmo que, dado un a�o, nos diga si es bisiesto o no. Un a�o es bisiesto 
	// bajo las siguientes condiciones:
	// ? Un a�o divisible por 4 es bisiesto y no debe ser divisible entre 100.
	// ?Si un a�o es divisible entre 100 y adem�s es divisible entre 400, tambi�n 
	// resulta bisiesto.
	// ?NOTA: este ejercicio tiene muchas formas de hacerlo.
	cout << "Introduce un a�o: " << endl;
	cin >> ano;
	if ((ano%4==0 && ano%100!=0)) {
		cout << "El a�o " << ano << " es bisiesto" << endl;
	} else {
		if ((ano%400==0 && ano%100==0)) {
			cout << "El a�o " << ano << " es bisiesto" << endl;
		} else {
			cout << "El a�o " << ano << " no es bisiesto" << endl;
		}
	}
	return 0;
}

