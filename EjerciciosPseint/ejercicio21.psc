Algoritmo ejercicio21
	//Algoritmo que lea un número entero (altura) y a partir de él, cree una 
	//escalera invertida de asteriscos con esa altura. Deberá quedar así, si 
    //ponemos una altura de 5.
	definir altura como entero
	Leer  altura
	
	asterisco=altura
	
	espacio=0
	
	Para  linea<-1 hasta altura con paso 1
		Para  espacio_linea<-0 hasta espacio con paso 1
			Escribir  " " sin saltar
		FinPara
		
		Para  asterisco_linea=1 hasta asterisco con paso 1
			Escribir  "*" sin saltar
		FinPara
		
		asterisco=asterisco-1
		
		espacio=espacio+1
		
		Escribir  " "
		
	FinPara
	
FinAlgoritmo
