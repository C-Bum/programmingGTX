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
	float num1;
	float num2;
	float num3;
	float producto;
	float suma;
	// Diseñar un algoritmo que pida por teclado tres números; si el primero es
	// negativo, debe imprimir el producto de los tres y si no lo es, imprimirá la suma
	num1 = 0;
	num2 = 0;
	num3 = 0;
	producto = 0;
	suma = 0;
	cout << "ingrese el primer digito: " << endl;
	cin >> num1;
	cout << "ingrese el segundo digito: " << endl;
	cin >> num2;
	cout << "ingrese el tercer digito: " << endl;
	cin >> num3;
	if (num1<0) {
		producto = num1*num2*num3;
		cout << "El producto de los tres digitos es : " << producto << endl;
	} else {
		suma = num1+num2+num3;
		cout << " La suma de los tres digitos es : " << suma << endl;
	}
	return 0;
}

