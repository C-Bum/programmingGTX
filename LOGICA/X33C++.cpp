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
	int canth;
	float descuento1;
	float descuento2;
	float descuento3;
	int matricula;
	int mes;
	float sociedadpadre;
	float subtotal;
	float total;
	// El colegio "Mi Casita" desea calcular el monto a pagar por inscripción del nuevo año escolar, para las familias con hijos en el colegio. 
	// Para ello seconoce el número de hijos que tiene la familia en el colegio, el monto de matrícula por niño, el monto de la mensualidad del mes de septiembre por 
	// niño y el monto de la sociedad de padres. Elabore un algoritmo que calcule el total a pagar por la familia, si la sociedad de padres se cobra una vez por 
	// familiar y si se otorga un descuento por la cantidad de hijos en el colegio que viene dado por la siguiente tabla
	cout << "============================COLEGIO MI CASITA============================" << endl;
	cout << "Para realizar el calculo a pagar ingrese los siguientes valores" << endl;
	cout << "Cuantos hijos tiene en el centro educativo: " << endl;
	cin >> canth;
	cout << "Cuanto paga por matricula: " << endl;
	cin >> matricula;
	cout << "Su mensualidad por mes es de: " << endl;
	cin >> mes;
	sociedadpadre = 10;
	subtotal = ((canth*mes)+matricula*canth)+sociedadpadre;
	descuento1 = subtotal*0.10;
	descuento2 = subtotal*0.15;
	descuento3 = subtotal*0.20;
	if (canth==2) {
		total = subtotal-descuento1;
		cout << " El total a pagar con " << canth << " hijos y tomando en cuenta la sociedad de padre es de: " << total << " incluyendo un descuento del 10% " << endl;
	} else {
		if (canth==3) {
			total = subtotal-descuento2;
			cout << " El total a pagar con " << canth << " hijos y tomando en cuenta la sociedad de padre es de: " << total << " incluyendo un descuento del 15% " << endl;
		} else {
			if (canth>3) {
				total = subtotal-descuento3;
				cout << " El total a pagar con " << canth << " hijos y tomando en cuenta la sociedad de padre es de: " << total << " incluyendo un descuento del 20% " << endl;
			}
		}
	}
	return 0;
}

