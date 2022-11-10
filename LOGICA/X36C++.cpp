// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float horasextras;
	float horasextrasapagar;
	float horast;
	float incentivo;
	SIN_TIPO nombre;
	float salarion;
	float salarioneto;
	float salarionsh;
	float sbh;
	// .Desarrolle un algoritmo para leer el nombre de un empleado, el salario básico por hora y el número de horas trabajadas durante una semana. 
	// Calcule el salario neto, teniendo en cuenta que, si el número de horas trabajadas durante la semana es mayor de 48 horas, esas horas demás 
	// se consideran horas extras y tienen un recargo del 35% (incentivo). Imprima el nombre del empleado y su salario neto.
	cout << "--------Bienvenido al sistema---------" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << nombre << " Ingrese su salario basico por hora: " << endl;
	cin >> sbh;
	cout << nombre << " Cual es el numero de horas trabajadas esta semana: " << endl;
	cin >> horast;
	horasextras = horast-48;
	horasextrasapagar = 0.35*sbh;
	incentivo = horasextrasapagar*horasextras;
	if (horast>48) {
		salarion = horast*sbh+incentivo;
		cout << nombre << " Tu salario neto es de: " << salarion << " $ " << endl;
	} else {
		salarionsh = sbh*horast;
		cout << nombre << " Tu salario neto es de: " << salarionsh << " $ " << endl;
	}
	return 0;
}

