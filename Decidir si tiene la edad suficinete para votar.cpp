#include <iostream>
#include <stdlib.h>
int a_nacimiento,edad, a_actual = 2021,E, n, cont=0;
float *v, P;

int main()
{   
    printf("Ingrese el numero de personas a evaluar : ");
	scanf("%d", &E);
     	for(int i=1;i<=E;i++){
     		
	printf("Ingresa el año de nacimiento: ");
	scanf("%d", &a_nacimiento);
	
	v= (float *) malloc (E*sizeof(float));
	P= 0;
	edad = a_actual - a_nacimiento;
	if(edad >= 18)
	{
		printf("La edad es: %d \n", &v[edad]);
		printf("Tiene edad suficiente para votar \n");
		
	}
	else 
	{
		printf("La edad es: %d \n", edad);
		printf("No tiene edad suficiente para votar \n");
	}
	 
	}
	for (n=0; n<E; n++){
		if (v[n] >=18);
		cont++;
	}
	printf ("\n Se tienen a %d personas que son mayores de edad", cont);
	free(v);
	printf("\nHa finalizado el programa!");
	return 0;
		}
