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
	float a;
	float b;
	float result;
	// Crear un algoritmo que reciba a>=0 y b>=0 y que calcule
	cout << "Ingrese la variable a: " << endl;
	cin >> a;
	cout << "Ingrese la variable b: " << endl;
	cin >> b;
	if (a>=0 && b>=0) {
		result = a/((a-b)*b);
		cout << " El resultado de la operacion es: " << result << endl;
	} else {
		cout << "Ingrese valores validos" << endl;
	}
	return 0;
}

