Proceso numeroPrimo
	Definir x, iteracion, divisionResiduoCero Como Entero;
	
    Escribir "Determinar si un n�mero ingresado, es un n�mero primo.";
    Escribir "Teclea un n�mero entero: ";
    Leer x;
	
    iteracion <- 1;
	
    divisionResiduoCero <- 0;
	
    Mientras iteracion <= x Hacer
		
        Si(x % iteracion == 0) Entonces
            divisionResiduoCero <- divisionResiduoCero + 1;
        FinSi
		
        iteracion <- iteracion + 1;
		
    FinMientras
	
    Si(divisionResiduoCero == 2) Entonces
        Escribir "Es un n�mero primo.";
    SiNo
        Escribir "NO es un n�mero primo.";
    FinSi   
FinProceso
