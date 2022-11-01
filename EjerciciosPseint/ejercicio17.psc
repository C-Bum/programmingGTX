Algoritmo ejercicio17
	// Algoritmo que visualice la cuenta de los números que son múltiplos de 2 o 
	//de 3 que hay entre 1 y 100
	Definir x,a,b Como Entero
	x = 1
	a = 0
	b = 0
	Mientras x <= 100 Hacer
		si x mod 2 == 0 Entonces
			Escribir"Numero multiplo de 2: "  x
		    a = a + 1
		SiNo                    
			si x mod 3 == 0 Entonces
				Escribir "	Numero multiplo de 3: " x
				b = b + 1
				
			FinSi
			
		FinSi
		x = x + 1
	FinMientras
	
Escribir "Números múltiplos de 2: " a
Escribir "Números múltiplos de 3: " b    

FinAlgoritmo
