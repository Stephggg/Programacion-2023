Proceso promedios
	definir programacion, calculo, tic, lectura, tallerColaboracion, teologia, resultado, promedio Como Real;
	escribir "Descubre tu promedio del primer semestre";
	escribir "Ingresa la calificacion total de programacion";
	leer programacion;
	escribir "Ingresa la calificacion total de calculo";
	leer calculo;
	escribir "Ingresa la calificacion total de tic";	
	leer tic;
	escribir "Ingresa la calificacion total de lectura";
	leer lectura;
	escribir "Ingresa la calificacion total de taller de colaboracion";
	leer tallerColaboracion;
	escribir "Ingresa la calificacion total de teologia";
	leer teologia;
	resultado <- (programacion * 6 + calculo * 6 + tic * 4 + lectura * 6 + tallerColaboracion * 4 + teologia);
	promedio <- resultado/26;
	escribir "Tu promedio del primer semestre es = ", promedio;
	FinProceso

