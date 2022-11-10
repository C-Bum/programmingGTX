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
	int c;
	int suma1;
	int suma2;
	int suma3;
	// Dados 3 números, determinar si la suma de dos de ellos es igual al tercero. 
	// Si se cumple, escribir "iguales", si no, escribir "distintos".
	cout << "Introduzca el primer digito: " << endl;
	cin >> a;
	cout << "Introduzca el segundo digito: " << endl;
	cin >> b;
	cout << "Introduzca el tercer digito: " << endl;
	cin >> c;
	suma1 = a+b;
	suma2 = b+c;
	suma3 = c+a;
	if (suma1==c || suma2==a || suma3==b) {
		cout << " iguales " << endl;
	} else {
		cout << " distintos " << endl;
	}
	return 0;
}

