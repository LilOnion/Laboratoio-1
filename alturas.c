/*
*obtener la estatura promedio de un grupo de personas
*número de
miembros se desconoce
*el ciclo debe efectuarse siempre
*ingreso de estaturas se realizará mediante
teclado
*inalizará con la tecla ’S’ o ’s’.
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char fin = ' ';
	float cantidadestaturas=0,estaturapromedio=0,estaturas=0,estatura;
	
	printf("Algoritmo para estatura promedio");
	printf(", las estaturas pueden tener hasta dos decimales\n");
		
	estaturapromedio=estaturas/cantidadestaturas;
	
	while (fin!='s'||fin!='S'){
		printf("Ingrese una estatura en metros");
		scanf("%f",&estatura);
	
		estaturas=estaturas+estatura;
		cantidadestaturas++;
	}
	
	
	printf("La estatura promedio es: %f metros",estaturapromedio);
	
	return 0;
}
