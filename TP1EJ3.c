//
// Created by ruloc on 12/17/2024.
//

#include <stdio.h>
#include <stdlib.h>
int costoViajes(int cantidadDeViajes){
  int costoTotal = 0;
  int costobase = 700;
  if(cantidadDeViajes > 0 && cantidadDeViajes < 21){
    costoTotal = costobase * cantidadDeViajes;
  }
  else if(cantidadDeViajes > 20 && cantidadDeViajes < 31){
    costoTotal = (costobase * cantidadDeViajes) * 0.80;
    }
  else if(cantidadDeViajes > 30 && cantidadDeViajes < 41){
      costoTotal = (costobase * cantidadDeViajes) * 0.70;
  }
  else{
    costoTotal = (costobase * cantidadDeViajes) * 0.60;
  }

  return costoTotal;
  }

int main(){
  int cantidadDeViajes1 = 1;
  int cantidadDeViajes2 = 15;
  int cantidadDeViajes3 = 25;
  int cantidadDeViajes4 = 35;
  int cantidadDeViajes5 = 45;

  int costo = costoViajes(cantidadDeViajes1);
  printf("total gastado en el mes: %d \n", costo);

  costo = costoViajes(cantidadDeViajes2);
  printf("total gastado en el mes: %d \n", costo);

  costo = costoViajes(cantidadDeViajes3);
  printf("total gastado en el mes: %d \n", costo);

  costo = costoViajes(cantidadDeViajes4);
  printf("total gastado en el mes: %d \n", costo);

  costo = costoViajes(cantidadDeViajes5);
  printf("total gastado en el mes: %d \n", costo);

  return 0;
}

