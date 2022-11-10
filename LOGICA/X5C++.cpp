// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float cuadrado;
	float num1;
	float r;
	// Realizar un algoritmo que lea un numero por teclado. En caso de que sea 0 o menor que 0, 
	// saldra del programa imprimiendo antes un mensaje de error, si es mayor que 0, se debera calculara
	// su cuadrado y la raiz cauadrada del mismo visualizando el numero que ha tecleado el usuario
	// y su resultado (“Del numero X, su potencia es X y su raíz X”).
	num1 = 0;
	cuadrado = 0;
	r = 0;
	cout << "Ingrese un numero: " << endl;
	cin >> num1;
	if (num1<=0) {
		cout << "El dato ingresado esta erroneo!!!" << endl;
	} else {
		if (num1>0) {
			cuadrado = pow(num1,2);
			r = sqrtf(num1);
			cout << "Del numero " << num1 << " , su potencia es " << cuadrado << " y su raiz es " << r << " " << endl;
		}
	}
	return 0;
}

