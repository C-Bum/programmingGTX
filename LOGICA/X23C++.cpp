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
	float cantcerveza;
	float cantfreso;
	float cantjamon;
	float cerveza;
	float jamon;
	float refresco;
	float total;
	// El siguiente es el menú de un restaurante de bocadillos. Diseñar un 
	// algoritmo capaz de leer el número de unidades consumidas de cada 
	// alimento ordenado y calcular la cuenta total. Vamos a suponer que estos 
	// precios son fijos, es decir, que son.
	jamon = 1.5;
	refresco = 1.05;
	cerveza = 0.75;
	total = 0;
	cout << "Introduce la cantidad de bocadillos de jamon" << endl;
	cin >> cantjamon;
	cout << "Introduce la cantidad de refresco" << endl;
	cin >> cantfreso;
	cout << "Introduce la cantidad de cerveza" << endl;
	cin >> cantcerveza;
	total = (cantjamon*jamon)+(cantfreso*refresco)+(cantcerveza*cerveza);
	cout << "El total a pagar es de " << total << " usd " << endl;
	return 0;
}

