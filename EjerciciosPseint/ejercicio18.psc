Algoritmo ejercicio18
	//Leer tres n�meros que denoten una fecha (d�a, mes, a�o). Comprobar que 
	//es una fecha v�lida. Si no es v�lida escribir un mensaje de error. Si es v�lida 
	//escribir la fecha cambiando el n�mero del mes por su nombre. Ej. Si se 
	//introduce 1 2 2021, se deber� imprimir "1 de febrero de 2021". El a�o debe 
	//ser mayor que 0.
	definir dia, mes, a�o como entero 
	definir NombreDia, NombreMes como caracter
	escribir "Ingrese el dia(x): " 
	leer dia 
	escribir "Ingrese el mes(xx): "
	leer mes
	escribir "Ingrese el a�o(xxxx): "
	leer a�o
	
	segun dia hacer
		Caso 1:NombreDia="Lunes"
		Caso 2:NombreDia="Martes"
		Caso 3:NombreDia="Miercoles"
		Caso 4:NombreDia="Jueves"
		Caso 5:NombreDia="Viernes"
		Caso 6:NombreDia="Sabado"
		Caso 7:NombreDia="Domingo"
	FinSegun
	
	segun mes hacer
		Caso 1:NombreMes="Enerp"
		Caso 2:NombreMes="Febrero"
		Caso 3:NombreMes="Marzo"
		Caso 4:NombreMes="Abril"
		Caso 5:NombreMes="Mayo"
		Caso 6:NombreMes="Junio"
		Caso 7:NombreMes="Julio"
		Caso 8:NombreMes="Agosto"
		Caso 9:NombreMes="Septiembre"
		Caso 10:NombreMes="Octubre"
		Caso 11:NombreMes="Noviembre"
		Caso 12:NombreMes="Diciembre"
	FinSegun
	
	
	
	
	escribir"La fecha de hoy es el " NombreDia " " dia " de "  NombreMes " del " a�o 
	
	
FinAlgoritmo
