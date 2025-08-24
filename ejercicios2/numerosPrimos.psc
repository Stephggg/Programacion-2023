Proceso  numerosPrimos
		Definir x, division1, cont Como Entero;
		
		Escribir "Ingresa un numero para determinar si es primo o no.";
		leer x;
		
		Para division1<-1 Hasta x Hacer
			si x%i=0 Entonces
				cont<-cont+1;
			FinSi
		FinPara
		si cont=2 Entonces
			Escribir x," es un número primo";
		SiNo
			Escribir x," no es un número primo";
		FinSi
FinProceso