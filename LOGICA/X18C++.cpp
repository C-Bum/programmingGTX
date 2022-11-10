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
	int ano;
	int año;
	int dia;
	int mes;
	string nombredia;
	string nombremes;
	// Leer tres números que denoten una fecha (día, mes, año). Comprobar que 
	// es una fecha válida. Si no es válida escribir un mensaje de error. Si es válida 
	// escribir la fecha cambiando el número del mes por su nombre. Ej. Si se 
	// introduce 1 2 2021, se deberá imprimir "1 de febrero de 2021". El año debe 
	// ser mayor que 0.
	cout << "Ingrese el dia(x): " << endl;
	cin >> dia;
	cout << "Ingrese el mes(xx): " << endl;
	cin >> mes;
	cout << "Ingrese el año(xxxx): " << endl;
	cin >> ano;
	switch (dia) {
	case 1:
		nombredia = "Lunes";
		break;
	case 2:
		nombredia = "Martes";
		break;
	case 3:
		nombredia = "Miercoles";
		break;
	case 4:
		nombredia = "Jueves";
		break;
	case 5:
		nombredia = "Viernes";
		break;
	case 6:
		nombredia = "Sabado";
		break;
	case 7:
		nombredia = "Domingo";
		break;
	}
	switch (mes) {
	case 1:
		nombremes = "Enerp";
		break;
	case 2:
		nombremes = "Febrero";
		break;
	case 3:
		nombremes = "Marzo";
		break;
	case 4:
		nombremes = "Abril";
		break;
	case 5:
		nombremes = "Mayo";
		break;
	case 6:
		nombremes = "Junio";
		break;
	case 7:
		nombremes = "Julio";
		break;
	case 8:
		nombremes = "Agosto";
		break;
	case 9:
		nombremes = "Septiembre";
		break;
	case 10:
		nombremes = "Octubre";
		break;
	case 11:
		nombremes = "Noviembre";
		break;
	case 12:
		nombremes = "Diciembre";
		break;
	}
	cout << "La fecha de hoy es el " << nombredia << " " << dia << " de " << nombremes << " del " << ano << endl;
	return 0;
}

