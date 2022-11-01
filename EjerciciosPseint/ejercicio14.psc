Algoritmo ejercicio14
	//Dada una secuencia de números leídos por teclado, que acabe con un ?1, 
    //por ejemplo: 5,3,0,2,4,4,0,0,2,3,6,0,??,-1; Realizar el algoritmo que calcule 
	//	la media aritmética. Suponemos que el usuario no insertará número 
	//negativos.
	definir num, suma Como Entero
	escribir "introduzca un numero: "
	Leer num
	
	suma = 0
	contador = 1
	
	Mientras (num<>-1) Hacer
		suma=suma+num
		
		contador=contador+1
		Leer num
	FinMientras
	
	Escribir suma/(contador-1)
	

FinAlgoritmo
