// RAYCHELL ARGUEDAS BOL�VAR 2019027258
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

  printf("�Qu� posici�n desea validar? ");
  scanf("%i", &posicion);
  printf("�Cu�l es el carnet del estudiante en la posici�n %d? ",posicion);
  scanf ("%i",carnet_buscado);

  if (carnet_buscado!=datos[posicion].carnet){
    
    printf("El carnet ingresado no corresponde a la posicion %d",posicion);
 }else{
    printf("El carnet ingresado es correcto");
  }
}

/*El codigo lo que debe hacer es unicamente registrar el carnet y nombre de 10 estudiantes, y luego verificar que est� correcto. No hay ninguna referencia a codigo de terceros, sin embargo s� le� sobre estructuras y arreglos en varios foros de programaci�n para poder comprender mejor el tema.*/
