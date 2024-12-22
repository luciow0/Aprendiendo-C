//
// Created by ruloc on 12/17/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

  char cadena[20];
  strcpy(cadena,"Hello World"); //tanto quilombo para declarar un string violado

  char *pCadena = cadena; // el tipo de dato del punteor debe ser del mismo tipo de dato al que apuntara
                           // operador de referencia *, convencion de nomenclatura para puntero pNombreVariable
                           // y apuntas el puntero a la direccion de memoria de la variable, para saberlo se usa el operador &

  // mostrar puntero
  printf("%p \n",pCadena);

    int a = 2;
    int *b = &a;
    printf("direccion de memoria: %p, correspondiente al valor %d \n",b,a);
    *b += 10;
    printf("direccion de memoria: %p, correspondiente al valor %d \n",b,a);
  return 0;
 }