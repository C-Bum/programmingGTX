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
	float descuento;
	float diasestancia;
	float distanciakm;
	float preciopasaje;
	float subtotal;
	// Determinar el precio de un billete de ida y vuelta por avión, conociendo la 
	// distancia a recorrer, el número de días de estancia y sabiendo que si la 
	// distancia es superior a 1000 Km, y el número de días de estancia es superior 
	// a 7, la línea aérea le hace un descuento del 30% (precio por kilómetro US$8.50).
	cout << "Ingrese los dias de su estancia: ";
	cin >> diasestancia;
	cout << "Ingrese la distancia de su viaje: ";
	cin >> distanciakm;
	subtotal = distanciakm*8.50;
	if (distanciakm>1000 && diasestancia>7) {
		descuento = subtotal*0.3;
	} else {
		descuento = 0;
	}
	preciopasaje = subtotal-descuento;
	cout << "Valor de descuento: " << descuento << " US$ " << endl;
	cout << "Valor de precio del pasaje: " << preciopasaje << " US$ " << endl;
	cout << "Valor de subtotal: " << subtotal << " US$ " << endl;
	return 0;
}

