Algoritmo ejercicio19
	//Calcular las calificaciones de un grupo de alumnos. La nota final de cada 
    //alumno se calcula según el siguiente criterio: la parte práctica vale el 10%; 
	//(la parte de problemas vale el 50% y la parte teórica el 40%. El algoritmo 
	//leerá el nombre del alumno, las tres notas, escribirá el resultado y volverá a 
	//pedir los datos del siguiente alumno hasta que el nombre sea una cadena 
	//vacía. Las notas deben estar entre 0 y 10, si no lo están, no imprimirá las 
	// 	notas, mostrará un mensaje de error y volverá a pedir otro alumno.
	salir<-Falso
	
	Repetir
		
		Escribir "Nombre del alumno:"
		Leer Nombre
		Si Nombre = "" Entonces
			salir<-Verdadero
		SiNo
			Escribir "Cual es su Nota segun la  práctica: "
			
			Repetir
				Leer NotaPr
				Si NotaPr < 0 o NotaPr > 10 Entonces
					Escribir "Error"
				Fin Si
			Hasta Que Notapr >= 0 y Notapr <= 10
			Escribir "Cual es su Nota segun los problemas: "
			
			Repetir
				Leer NotaPbma
				Si NotaPbma < 0 o NotaPbma > 10 Entonces
					Escribir "Error"
				Fin Si
			Hasta Que NotaPbma >= 0 y NotaPbma <= 10
			Escribir "Cual es su nota segun la  teória: "
			
			Repetir
				Leer NotaT
				Si NotaT < 0 o NotaT > 10 Entonces
					Escribir "Error"
				Fin Si
				
			Hasta Que NotaT >= 0 y NotaT <= 10
			
			PorcentajeNotaPr = NotaPr * 0.10
			
			PorcentajeNotaPbma = NotaPbma *0.50
			
			PorcentajeNotaT = NotaT * 0.40
			
			TotalNota = PorcentajeNotaPr + PorcentajeNotaPbma + PorcentajeNotaT
		Fin Si
		escribir " su nota por practica es del: " PorcentajeNotaPr "%"
		escribir " su nota por resolucion de problema es del: " PorcentajeNotaPbma "%"
		escribir " su nota por teoria es del: " PorcentajeNotaT "%"
		escribir "La nota final es del: " TotalNota "%"
	Hasta Que salir = Verdadero
	

	
	 
FinAlgoritmo
