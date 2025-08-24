Proceso sin_titulo
	definir x, kb, mb, gb, tb, pb, eb, zb, yb  como real;
Escribir "Ingrese una cantidad de bytes para convertir";
Leer x;
kb <- x * 0.001;
mb <-  kb * 1000;
gb <- mb * 1000;
tb <- gb *1000;
pb <- tb *1000;
eb <- pb * 1000;
zb <- eb *1000;
yb <- zb * 1000;

escribir x,"bytes son equivalentes a", kb,"kb, ",mb,"mb, ", gb, "gb, ";

FinProceso
