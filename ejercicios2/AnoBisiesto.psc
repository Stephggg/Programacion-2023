Proceso AnoBisiesto
	definir x como entero;
	Escribir Sin Saltar "Ingresa el a�o que decidas verificar bisiesto:";
		Leer x;
		Si ((x MOD 4 = 0) Y (x MOD 100 <> 0)) O x MOD 400 = 0 Entonces
			Escribir "el a�o es bisiesto";
		SiNo
			Escribir "el a�o no es bisiesto";
		FinSi

FinProceso
