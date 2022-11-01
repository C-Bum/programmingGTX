Algoritmo ejercicio9
	//Modificar el algoritmo anterior, de forma que,si se teclea un cero, se vuelva 
	//a pedir el número por teclado (así hasta que se teclee un número mayor 
	//que cero).
	
	definir num1 como entero
	num1 = 0
	
	Repetir
		escribir "Porfavor digite un numero entero: "
		leer num1
		si num1 = 0 entonces 
			escribir "Porfavor digite un numero entero: "
			leer num1
		sino
				si num1 mod 2=0 entonces 
					escribir "==================================="
					escribir "El numero " num1 " es un numero par"
					escribir "==================================="
				SiNo
					
					escribir "==================================="
					escribir "El numero " num1 " es un numero impar"
					escribir "==================================="
				FinSi
		FinSi
			
	hasta Que num1 > 0



    
	
	
	
FinAlgoritmo
