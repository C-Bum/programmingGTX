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
	int num;
	int suma;
	// Dada una secuencia de números leídos por teclado, que acabe con un ?1, 
	// por ejemplo: 5,3,0,2,4,4,0,0,2,3,6,0,??,-1; Realizar el algoritmo que calcule 
	// la media aritmética. Suponemos que el usuario no insertará número 
	// negativos.
	cout << "introduzca un numero: " << endl;
	cin >> num;
	suma = 0;
	contador = 1;
	while ((num!=-1)) {
		suma = suma+num;
		contador = contador+1;
		cin >> num;
	}
	cout << suma/(contador-1) << endl;
	return 0;
}

