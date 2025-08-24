Proceso AnoBisiesto
	definir x como entero;
	Escribir Sin Saltar "Ingresa el año que decidas verificar bisiesto:";
		Leer x;
		Si ((x MOD 4 = 0) Y (x MOD 100 <> 0)) O x MOD 400 = 0 Entonces
			Escribir "el año es bisiesto";
		SiNo
			Escribir "el año no es bisiesto";
		FinSi

FinProceso
