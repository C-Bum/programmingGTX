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
	float ano;
	float año;
	float credito;
	float cuatrocientos;
	SIN_TIPO nombre;
	float quinientos;
	float sueldo;
	float trecientos;
	// Suponga que usted es un ejecutivo de una microfinanciera, encargado de entregar créditos a las personas. De acuerdo a las reglas del banco para 
	// el que usted trabaja, el monto del crédito al que una persona puede acceder depende de su sueldo. Para determinar el crédito al que una 
	// persona puede optar, debe utilizar la siguiente tabla entregada por el banco
	cout << "-----------Bienvenido a nuestra Microfinanciera------------" << endl;
	cout << "Cual es su nombre: " << endl;
	cin >> nombre;
	cout << nombre << " para optar por un credito necesitamos conocer tu salario mensual." << endl;
	cout << " De cuanto es tu salario: " << endl;
	cin >> sueldo;
	ano = 12;
	credito = sueldo*ano;
	quinientos = 500000;
	cuatrocientos = 400000;
	trecientos = 300000;
	if (sueldo==200000) {
		cout << " lo sentimos tu salario de " << sueldo << " C$  no permite a que optes por uno de nuestros creditos!" << endl;
	} else {
		if (sueldo==quinientos || sueldo==cuatrocientos || sueldo==trecientos) {
			cout << " Estas aprobado!  Puedes tomar un credito maximo de 500,000 C$ " << endl;
		} else {
			if (sueldo>=500000) {
				cout << " Estas aprobado!  Puedes tomar un credito maximo de 1,000,000 C$ " << endl;
				cout << " y nos gustaria trabajar con usted " << endl;
			}
		}
	}
	return 0;
}

