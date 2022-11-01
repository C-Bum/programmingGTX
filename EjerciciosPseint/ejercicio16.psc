Algoritmo ejercicio16
	//Algoritmo que lea números enteros hasta teclear 0, y nos muestre el 
	//máximo, el mínimo y la media de todos ellos.
	definir a Como Entero
	definir x, suma, promedio como real
	a = 0
	x = 1
	suma = 0
	mientras x <> 0 hacer 
		escribir "Ingrese un numero: "
		leer x
	     si x <> 0 entonces 
		 a = a + 1
		 suma = suma + x
		 promedio = suma / a
		 si band = verdadero entonces
			 max = x
			 min = x
			 band = falso
		 sino
			 si x > max entonces 
				 max = x
			 sino
				 si x < min entonces
					 min = x
				 FinSi
			 FinSi
		 FinSi
	 finsi
	 
	FinMientras
	
	escribir "El promedio de ellos es: " promedio
	escribir "El maximo es: " max
	escribir "El minimo es: " min
	
FinAlgoritmo
