#include <stdio.h>
#define descuento 0.25
float prec_prod, precio_final, monto_desc;
main () {
	printf("Ingrese el precio del producto");
	scanf("%f", & prec_prod);
	precio_final= prec_prod - (prec_prod * descuento);
	printf("El precio final es: $%f ", precio_final);
	monto_desc= prec_prod * descuento;
	printf("El monto del descuento es: $%f ", monto_desc);
	
	
	
	
}
