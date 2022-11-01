Algoritmo ejercicio5
	//Realizar un algoritmo que lea un numero por teclado. En caso de que sea 0 o menor que 0, 
	//saldra del programa imprimiendo antes un mensaje de error, si es mayor que 0, se debera calculara
	//su cuadrado y la raiz cauadrada del mismo visualizando el numero que ha tecleado el usuario
	//y su resultado (“Del numero X, su potencia es X y su raíz X”).
	
	definir num1, cuadrado, R como real
	num1 = 0
	cuadrado = 0
	R = 0
	
	escribir "Ingrese un numero: " 
	leer num1
	
	si num1 <= 0 entonces 
		escribir "El dato ingresado esta erroneo!!!"
	sino
		si num1 > 0 entonces 
			cuadrado = num1^2
			R = raiz(num1)
		    escribir "Del numero " num1 " , su potencia es " cuadrado " y su raiz es " R " "
		FinSi
	FinSi
	
	
FinAlgoritmo




