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
	int producto;
	int resultado;
	int x;
	// Un algoritmo que calcule el producto de N números ingresados por el 
	// usuario
	cout << "El programa acaba cuando ingreses un 0" << endl;
	x = 1;
	producto = 0;
	resultado = 1;
	while (x!=0) {
		cout << "Ingrese un numero: " << endl;
		cin >> x;
		if (x!=0) {
			resultado = resultado*x;
			producto = resultado;
		}
	}
	cout << "El producto de los numeros ingresados es: " << producto << endl;
	return 0;
}

