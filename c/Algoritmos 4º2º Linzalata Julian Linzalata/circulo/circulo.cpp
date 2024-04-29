#include <stdio.h>
#define pi 3.14
float radio, superficie_circulo;
main() {
	printf ("ingrese radio del circulo:");
	scanf ("%f", & radio);
	superficie_circulo = pi * radio * radio;
	printf ("la superficie del circulo es: %f", superficie_circulo);
}
