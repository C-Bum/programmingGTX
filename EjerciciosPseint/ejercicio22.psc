Algoritmo ejercicio22
	//Algoritmo que, dado un año, nos diga si es bisiesto o no. Un año es bisiesto 
	//bajo las siguientes condiciones:
 	//? Un año divisible por 4 es bisiesto y no debe ser divisible entre 100.
	//?Si un año es divisible entre 100 y además es divisible entre 400, también 
	//resulta bisiesto.
	//?NOTA: este ejercicio tiene muchas formas de hacerlo.
	
	definir año Como Entero
	escribir "Introduce un año: "
	leer año
	
	si  (año MOD 4=0 y año MOD 100<>0)Entonces
		Escribir  "El año " año " es bisiesto"
	Sino
		si  (año MOD 400=0 y año MOD 100=0) Entonces
			Escribir  "El año " año " es bisiesto"
		Sino
			escribir  "El año " año " no es bisiesto"
		FinSi

   FinSi
	
FinAlgoritmo
