Proceso numeroPrimo
	Definir x, iteracion, divisionResiduoCero Como Entero;
	
    Escribir "Determinar si un número ingresado, es un número primo.";
    Escribir "Teclea un número entero: ";
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
        Escribir "Es un número primo.";
    SiNo
        Escribir "NO es un número primo.";
    FinSi   
FinProceso
