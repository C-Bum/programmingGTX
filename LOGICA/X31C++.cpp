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
	float c;
	float n;
	float result;
	// . Dado un número entero n, encuentre sus divisores
	cout << "Ingrese un numero: " << endl;
	cin >> n;
	c = 0;
	while (c<=n) {
		c = c+1;
		if (n%c==0) {
			cout << "El numero " << c << " es divisor de " << n << " " << endl;
		}
	}
	return 0;
}

