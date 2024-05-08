#include <stdio.h>
int cliente;
float prec_boleto, opcion_cuo, monto_total, monto_cuo, descuento;
main(){
	printf("Elija opciones de cliente: \n Elija opcion 1. Usted es cliente habitual. \n Elija opcion 2. Usted no es cliente habitual. \n");
	scanf("%d", & cliente);
	printf("Ingrese precio del boleto a pagar: ");
	scanf("%f", & prec_boleto);
	printf("Ingrese opcion de cuotas con sus respectivos intereses: \n Elija opcion 1 para hacer el pago con 3 cuotas con intereses del 10 porciento \n Elija opcion 2 para hacer el pago con 6 cuotas con intereses del 20 porciento \n");
	scanf("%f", & opcion_cuo);
	
	
	if (cliente == 1)
	{
		descuento= prec_boleto * 15/100;
		monto_total= prec_boleto - descuento;
	}
	
		printf("El monto total a pagar es de: %f", monto_total);
	
	if (opcion_cuo== 1 )
	{
		monto_cuo= prec_boleto * 10/100;
		monto_total= prec_boleto + (monto_cuo * 3);
		printf("Usted eligio 3 cuotas");
	}
	else if (opcion_cuo == 2)
	{
		monto_cuo= prec_boleto * 20/100;
		monto_total= prec_boleto + (monto_cuo * 6);
		printf("Usted eligio 6 cuotas");
	}
	
	printf("El valor de cada cuota es")
	


	
	
}
