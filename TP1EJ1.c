//
// Created by ruloc on 12/17/2024.
//

#include <stdio.h>

int mayorEstricto(int a, int b, int c){
  int mayor;
  if(a>b){
    if(a>c){
      mayor=a;
    }
  }
  else if(b>a){
    if(b>c){
      mayor=b;
    }
  }
  else if(c>a){
    if(c>b){
      mayor=c;
    }
  }
  return mayor;
}

int main(){
  int a,b,c;

  printf("Ingrese su primer numero positivo: \n");
     scanf("%d",&a);
  while(a<= 0){
    printf("Ingrese su primer numero positivo, y esta vez que sea positivo: \n");
    scanf("%d",&a);
  }
  printf("Ingrese su segundo numero positivo:  \n");
     scanf("%d",&b);
  while(b<= 0){
    printf("Ingrese su primer numero positivo, y esta vez que sea positivo:  \n");
    scanf("%d",&b);
  }
  printf("Ingrese su tercer numero positivo:  \n");
  scanf("%d",&c);
  while(c<= 0){
    printf("Ingrese su tercer numero positivo, y esta vez que sea positivo:  \n");
    scanf("%d",&c);
  }

  int resultado = mayorEstricto(a, b, c);
  printf("El resultado es: %d",resultado, "\n");

  return 0;
  }

