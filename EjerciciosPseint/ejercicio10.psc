Algoritmo ejercicio10
	//Algoritmo que nos diga si una persona puede acceder a cursar un ciclo 
	//formativo de grado superior o no. Para acceder a un grado superior, si se 
	//	tiene un título de bachiller, en caso de no tenerlo, se puede acceder si 
	//	hemos superado una prueba de acceso (admisión).
	definir estado como caracter 
	
	escribir "Para acceder a nuestro ciclo de grado superior, debes de completar este  pequeño cuestionario"
	escribir "Responda con si o no."
	
	escribir "Eres bechiller?: "
	leer estado
	
	si estado = "si" entonces 
		escribir "felicidades, puedes acceder a nuestro ciclo de estudio!"
	sino
		escribir "Oh vaya! lo sentimos, sin embargo aun puedes entrar  en nuestro ciclos,  pero deberas realizar el examen de admision."
	FinSi
	
	
FinAlgoritmo


  
