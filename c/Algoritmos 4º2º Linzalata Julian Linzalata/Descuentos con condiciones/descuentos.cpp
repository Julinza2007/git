#include <stdio.h>

float precio_usu, descuento, total;

main(){
	printf("Ingrese el precio del producto por favor: ");
	scanf("%f", & precio_usu);
	if (precio_usu <= 5000)
	{
		descuento= precio_usu * 10/100;
	}
	else if (precio_usu < 15000)
	{
		descuento= precio_usu * 15/100;
		}
		else if(precio_usu < 20000 )
		{
		descuento= precio_usu * 20/100;	
			}
			else if(precio_usu >= 20000)
			{
				descuento= precio_usu * 25/100;
			}
			total= precio_usu - descuento;
	printf("El monto total es %f ", total);
	printf("El descuento es del %f ", descuento);
}
