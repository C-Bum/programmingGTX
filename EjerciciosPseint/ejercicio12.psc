Algoritmo ejercicio12
	//. Se pide representar el algoritmo que nos calcule la suma de los N primeros 
	//n�meros naturales. N se leer� por teclado.
	definir num como entero
	escribir "Cuantos primeros numeros deseas sumar?: "
	leer num
	contador = 0
	para i=1 hasta num con paso 1 hacer
		escribir i
		contador = contador + i
	finpara 
	escribir "la sema de los primeros " num " numeros es:" contador 
	
FinAlgoritmo
