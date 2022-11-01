Algoritmo ejercicio13
	//Se pide representar el algoritmo que nos calcule la suma de los N primeros 
	//números pares. Es decir, si insertamos un 5, nos haga la suma de 
	//	6+8+10+12+14.
	definir num como entero
	escribir "Cuantos primeros numeros pares deseas sumar?: "
	leer num
	contador = 0
	para i=0 hasta num con paso 2 hacer
		escribir i
		contador = contador + i
	finpara 
	escribir "la sema de los primeros " num " numeros pares es:" contador 
FinAlgoritmo
