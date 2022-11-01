Algoritmo ejercicio004
	definir GradosCelsius, fahr como real
	definir ing como cadena
	GradosCelsius=0
	fahr= 0
	const = 32
	escribir "para describir la conversion que desea saber, solo coloque las iniciales(c a f, f a c) "
	escribir "Que conversion desea saber: "
	leer ing
	
	si ing = "c a f" entonces
		 hacer fahr = (GradosCelsius * 1.8) + const
		escribir "La temperatura de celsius a fahrenheit es de: " fahr '°' "fahrenheit"
	sino si ing = "f a c" entonces 
		 hacer GradosCelsius = (fahr - const) / 1.8
	     escribir "La temperatura de fahrenheit a celsius es de: " GradosCelsius '°' "Celsius"
	FinSi
	
FinAlgoritmo
