Algoritmo ejercicio20
	//Algoritmo que lea un número entero (lado) y a partir de él, cree un cuadrado 
	//de asteriscos con ese tamaño.
	definir lado como entero
	escribir"Ingrese el tamaño del cuadrado que creara en base al lado que introduzca: "
	Leer  lado
	Para  asterisco=1 Hasta lado Con Paso 1
		Escribir  "*" Sin Saltar
	FinPara
	
	escribir  " "
	
	Para  fila=1 Hasta lado-2 Con Paso 1
		Escribir  "*" Sin Saltar
		Para  columna<-1 Hasta lado-2 con Paso 1
			Escribir  " " sin saltar
		FinPara
		
		Escribir  "*" Sin Saltar
		escribir  " "
		
	FinPara
	
	Para  asterisco=1 Hasta lado Con Paso 1
		Escribir  "*" Sin Saltar
	FinPara
	
	
	
FinAlgoritmo
