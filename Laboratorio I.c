// RAYCHELL ARGUEDAS BOLÍVAR 2019027258
// ESTRUCTURAS DE DATOS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct estudiantes{
	int carnet;
	char nombre[20];
	}datos[10];


int main(){
  
  int indice;
  int posicion;
  int carnet_buscado;
  int nuevo_carnet;
  
 

  for (indice=0; indice<=10; indice++)
  {
	printf("Digite el carnet del estudiante ");
	scanf ("%d", &nuevo_carnet);
	datos[indice].carnet= nuevo_carnet;
  
	printf("Digite el nombre del estudiante ");
	scanf ("%s",datos[indice].nombre);
  printf("\n");
}

  printf(" ¿Que posicion desea validar? ");
  scanf("%d", &posicion);
  printf(" ¿Cual es el carnet del estudiante en la posicion\n");
  scanf ("%d",&carnet_buscado);

  if (carnet_buscado== nuevo_carnet){

		printf("El carnet ingresado es correcto\n");
		system ("PAUSE");


 }
 else{
		printf("El carnet ingresado no corresponde a la posicion\n");
		system("PAUSE");


  }
}

/*El codigo lo que debe hacer es unicamente registrar el carnet y nombre de 10 estudiantes, y luego verificar que esté correcto. No hay ninguna referencia a codigo de terceros, sin embargo sÍ leí sobre estructuras y arreglos en varios foros de programación para poder comprender mejor el tema.*/
