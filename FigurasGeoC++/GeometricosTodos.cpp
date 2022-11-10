#include<iostream>
using namespace std;


int main() {
	float intensidad;
	string nombre;
	float voltaje;
	float watts;
	cout << "*                                                                      *" << endl;
	cout << "*                                                                      *" << endl;
	cout << "============================ELECTRIC HAMMER============================" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " Toca ENTER para para accesar... " << endl;
	cin.get(); 
	cout << endl; 
	cout << "Bienvenido a nuestro asistente de ayuda!" << endl;
	cout << "Hola, cual es tu nombre: " << endl;
	cin >> nombre;
	cout << endl; 
	cout << nombre << " Te ayudaremos a encontrar el cable electrico adecuado que buscas para tus necesidades." << endl;
	cout << " Pero, antes de eso necesito saber un par de especificaciones del equipo al cual le haras el cambio o el cable que busques" << endl;
	cout << " " << endl;
	cout << endl; 
	cout << " " << endl;
	cout << nombre << " De cuantos Watts es el equipo a reparar o con cuantos watts trabajaras: " << endl;
	cin >> watts;
	cout << endl; 
	cout << " " << endl;
	cout << nombre << " A cuanto Voltaje trabaja el equipo, o a cuanto Voltaje trabajaras: " << endl;
	cin >> voltaje;
	cout << endl; 
	intensidad = watts/voltaje;
	if (watts <= 0 || voltaje <= 0){
		cout << "valores ingresados incorrectos!!";
	}
	if (intensidad<=2) {
		cout << "Oh vaya, necesitas un cable calibre 20 AWG debido a que circulara una corriente de " << intensidad << " Amperios. " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>2 && intensidad<=10) {
		cout << "Oh vaya, necesitas un cable calibre 18 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << " Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>10 && intensidad<=15) {
		cout << "Oh vaya, necesitas un cable calibre 16 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad==15) {
		cout << "Oh vaya, necesitas un cable calibre 14 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>15 && intensidad<=20) {
		cout << "Oh vaya, necesitas un cable calibre 12 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>20 && intensidad<=30) {
		cout << "Oh vaya, necesitas un cable calibre 10 AWG debido a que circulara una corriente de" << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>30 && intensidad<=40) {
		cout << "Oh vaya, necesitas un cable calibre 8 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>40 && intensidad<=55) {
		cout << "Oh vaya, necesitas un cable calibre 6 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>55 && intensidad<=70) {
		cout << "Oh vaya, necesitas un cable calibre 4 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>70 && intensidad<=85) {
		cout << "Oh vaya, necesitas un cable calibre 3 AWG debido a que circulara una corriente de" << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>85 && intensidad<=95) {
		cout << "Oh vaya, necesitas un cable calibre 2 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>95 && intensidad<=110) {
		cout << "Oh vaya, necesitas un cable calibre 1 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>110 && intensidad<=125) {
		cout << "Oh vaya, necesitas un cable calibre 1/0 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>125 && intensidad<=145) {
		cout << "Oh vaya, necesitas un cable calibre 2/0 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>145 && intensidad<=165) {
		cout << "Oh vaya, necesitas un cable calibre 3/0 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	if (intensidad>165 && intensidad<=195) {
		cout << "Oh vaya, necesitas un cable calibre 4/0 AWG debido a que circulara una corriente de " << intensidad << " Amperios " << endl;
		cout << "Para el cable que necesitas tienes entre estas opciones, dependiendo a la temperatura que sean expuestos" << endl;
		cout << " 1- 60° / TW " << endl;
		cout << " 2- 75° / RHW " << endl;
		cout << " 3- 75° / THW " << endl;
		cout << " 4- 75° / THWN " << endl;
		cout << " 5- 90° / THHN " << endl;
		cout << " 6- 90° / XHHW " << endl;
		cout << " 7- 90° / THWN " << endl;
	} else {
	}
	return 0;
}

