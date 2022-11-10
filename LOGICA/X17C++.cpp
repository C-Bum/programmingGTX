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
	int a;
	int b;
	int x;
	// Algoritmo que visualice la cuenta de los números que son múltiplos de 2 o 
	// de 3 que hay entre 1 y 100
	x = 1;
	a = 0;
	b = 0;
	while (x<=100) {
		if (x%2==0) {
			cout << "Numero multiplo de 2: " << x << endl;
			a = a+1;
		} else {
			if (x%3==0) {
				cout << " Numero multiplo de 3: " << x << endl;
				b = b+1;
			}
		}
		x = x+1;
	}
	cout << "Números múltiplos de 2: " << a << endl;
	cout << "Números múltiplos de 3: " << b << endl;
	return 0;
}

