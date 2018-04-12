#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float cuenta=0,propina,iva,pago;
	int amigos;
	
	printf("¿Cuantos amigos acompañaron a Pepe?");
	scanf("%d",&amigos);
	 
	iva=cuenta/100*19;
	propina=cuenta/100*10;
	cuenta=cuenta+iva+propina;
	pago=cuenta/(1+amigos);
	
	printf("El total de la cuenta es: $%.2f\n",cuenta);
	printf("El IVA es de: %.2f\n",iva);
	printf("La propina es de: $%.2f\n",propina);
	printf("Cada uno debe pagar: $%.0f",pago);
	
	return 0;
	
}
