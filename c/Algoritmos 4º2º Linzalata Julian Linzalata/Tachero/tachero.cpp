#include <stdio.h>
#define base 1000
float kilometraje, total;
main(){
	
	printf("Por favor indique distancia: ");
	scanf("%f", & kilometraje);
	
	if (kilometraje < 6)
	{
	total= (kilometraje / 0.5) * 350 + base;		

if (kilometraje >=6 && kilometraje < 12)
	{
	total= (kilometraje / 0.5) * 250 + base;		
	}

}

	
	

	printf("La cantidad de kilometraje es %f \n", kilometraje);
	printf("El total a pagar es: %f ", total);
}
