Algoritmo ejercicio15
	//Teniendo en cuenta que la clave es "tuani", escribir un algoritmo que nos 
	//pida una clave. Solo tenemos 3 intentos para acertar, si fallamos los 3 
//intentos nos mostrará un mensaje indicándonos que hemos agotado esos 3 
//intentos. Si acertamos la clave, saldremos directamente del programa
	Definir session, intentos como entero 
	session = 0
	intentos  = 0
	escribir "Puedes usar el usuario estandar (admin)"
	mientras intentos < 3 y session == 0 Hacer
		escribir "Ingrese el usuario"
		leer Login 
		escribir "Ingrese la contrasena"
		leer password
		si Login = "admin" Entonces
			si password = "tuani" Entonces
				escribir "**Bienvenido al Sistema**"
				session = session + 1
			sino
				escribir "La contrasena es incorrecta"
				intentos = intentos + 1 
				Limpiar Pantalla
			FinSi
		sino 
			escribir "El usuario es incorrecto"
			intentos = intentos + 1
			Limpiar Pantalla
		FinSi
	FinMientras
	
	si intentos = 3 entonces 
		escribir "Lo siento, has sido bloqueado tras haber utilizado 3 intentos!!!!"
	FinSi
	
FinAlgoritmo
	
	
	
FinAlgoritmo


