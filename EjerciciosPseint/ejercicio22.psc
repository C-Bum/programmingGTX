Algoritmo ejercicio22
	//Algoritmo que, dado un a�o, nos diga si es bisiesto o no. Un a�o es bisiesto 
	//bajo las siguientes condiciones:
 	//? Un a�o divisible por 4 es bisiesto y no debe ser divisible entre 100.
	//?Si un a�o es divisible entre 100 y adem�s es divisible entre 400, tambi�n 
	//resulta bisiesto.
	//?NOTA: este ejercicio tiene muchas formas de hacerlo.
	
	definir a�o Como Entero
	escribir "Introduce un a�o: "
	leer a�o
	
	si  (a�o MOD 4=0 y a�o MOD 100<>0)Entonces
		Escribir  "El a�o " a�o " es bisiesto"
	Sino
		si  (a�o MOD 400=0 y a�o MOD 100=0) Entonces
			Escribir  "El a�o " a�o " es bisiesto"
		Sino
			escribir  "El a�o " a�o " no es bisiesto"
		FinSi

   FinSi
	
FinAlgoritmo
