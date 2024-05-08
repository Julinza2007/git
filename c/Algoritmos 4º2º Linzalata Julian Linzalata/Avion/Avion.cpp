#include <stdio.h>
int cliente;
float prec_boleto, num_cuo, monto_total, monto_cuo, descuento;
main(){
	printf("Elija opciones de cliente: \n Elija opcion 1. Usted es cliente habitual. \n Elija opcion 2. Usted no es cliente habitual. \n");
	scanf("%d", & cliente);
	printf("Ingrese precio del boleto a pagar: ");
	scanf("%f", & prec_boleto);
	printf("Ingrese opcion de cuotas con sus respectivos intereses: \n Elija la cantidad de cuotas para hacer el pago (hasta 3 cuotas con intereses del 10 porciento), \n y (hasta 6 cuotas inclusive con intereses del 20 porciento) \n");
	scanf("%f", & num_cuo);
	
	
	
	if (num_cuo <= 3)
	{
		monto_total= prec_boleto * 1.10;
		monto_cuo= monto_total / num_cuo;
		
	}
	else if (num_cuo <= 6)
	{
		monto_total= prec_boleto * 1.2;
		monto_cuo= monto_total / num_cuo;
	}
	
	printf("El monto total a pagar es de: %f \n", monto_total);

	if (cliente == 1)
	{
		descuento= prec_boleto * 0.15;
		monto_total = monto_total - descuento;
		printf("El descuento por ser cliente habitual es %f \n", descuento);
	}
	
	else {
		printf("Usted no tiene descuento \n");
	}
	printf("El monto de las cuotas es de %f \n", monto_cuo);
	
	


	
	
}
