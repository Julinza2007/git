#include <stdio.h>
float dinero_disp, rendi_anual, rendi_mensual;
main() {
	printf("ingrese dinero disponible:");
	scanf("%f", & dinero_disp);
	printf ("ingrese rendimiento anual:");
	scanf("%f", & rendi_anual);
rendi_mensual= (rendi_anual / 12 ) * dinero_disp / 100;
printf("el rendimiento mensual es %f", rendi_mensual);	
	
}
