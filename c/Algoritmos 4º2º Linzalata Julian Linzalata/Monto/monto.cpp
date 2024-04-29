#include <stdio.h>
#define opcion_1 20/100
#define opcion_2 1/3
#define opcion_3 1/6
#define interescuo 0.2
#define interes 1.2

float prec_prod, opcion, monto_final, cuoint;
main(){
		printf("Ingrese precio del producto ");
		scanf("%f", & prec_prod);
		printf("Las opciones de pago son: \n 1. 20 porciento de descuento. \n 2. 3 cuotas sin interes \n 3. 6 cuotas con interes del 20 porciento \n");
		scanf("%f", & opcion);
		if(opcion==1)
		{
		monto_final= prec_prod * opcion_1;
		}
		else if(opcion==2)
		{
		monto_final= prec_prod * opcion_2;

		}
		
		else if(opcion==3)
		
		{
		cuoint= prec_prod * opcion_3 + cuoint * interescuo;
		monto_final= prec_prod * interes;
		printf("El interes en cuotas es %f \n", cuoint);
		}
		printf("El monto final es %f", monto_final);
		}
