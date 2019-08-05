// RAYCHELL ARGUEDAS BOLÍVAR 2019027258
// ESTRUCTURAS DE DATOS 

#include <stdio.h>

struct estudiantes{
	int carnet[10];
	char nombre[20];
	}datos[10];


int main(){
  
  int indice;
  int posicion;
  int carnet_buscado[10];

  for (indice=0; indice<=9; indice++)
  {
	printf("Digite el carnet del estudiante %d : ",indice+1);
	scanf ("%i",datos[indice].carnet);
  
	printf("Digite el nombre del estudiante %d : ", indice+1);
	scanf ("%s",datos[indice].nombre);
  printf("\n");
  }

  printf("¿Qué posición desea validar? ");
  scanf("%i", &posicion);
  printf("¿Cuál es el carnet del estudiante en la posición %d? ",posicion);
  scanf ("%i",carnet_buscado);

  if (carnet_buscado!=datos[posicion].carnet){
    
    printf("El carnet ingresado no corresponde a la posicion %d",posicion);
 }else{
    printf("El carnet ingresado es correcto");
  }
}

/*El codigo lo que debe hacer es unicamente registrar el carnet y nombre de 10 estudiantes, y luego verificar que esté correcto. No hay ninguna referencia a codigo de terceros, sin embargo sÍ leí sobre estructuras y arreglos en varios foros de programación para poder comprender mejor el tema.*/
