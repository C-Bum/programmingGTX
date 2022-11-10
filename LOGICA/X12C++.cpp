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
	float contador;
	float i;
	int num;
	// . Se pide representar el algoritmo que nos calcule la suma de los N primeros 
	// números naturales. N se leerá por teclado.
	cout << "Cuantos primeros numeros deseas sumar?: " << endl;
	cin >> num;
	contador = 0;
	for (i=1;i<=num;i++) {
		cout << i << endl;
		contador = contador+i;
	}
	cout << "la sema de los primeros " << num << " numeros es:" << contador << endl;
	return 0;
}

