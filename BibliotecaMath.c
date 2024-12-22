//
// Created by ruloc on 12/17/2024.
//


// la funcion abs estandar de c no acepta argumentos de tipo double, espera un int
// la funcion fabs de math.h si

// deja nomas

#include <stdio.h>

int main(){
  int a,b,c;
  printf("Digite um numero: ");
  scanf("%d", &a);
  printf("%d",a);

  while (a > 0) {
    a--;
    printf("\n");
    printf("el valor de a es: %d \n", a);
  }

  printf("escribite otro numerito paa: ");
  scanf("%d",&b);

  if (b > 1) {
    printf("blooooooooooooooooooooooom \n"); // aca hay que agregar siempre todos los saltos de linea pq no vienen embebidos solos
  }
  else {
    printf("numero de loan");
  }

  for (int i = 1; i <= b; i++) {
    printf("%d", i);
  }

  return 0;
}