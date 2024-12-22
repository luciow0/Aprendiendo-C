//
// Created by ruloc on 12/17/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verificarFecha(int dia, int mes, int ano){
   int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   bool bisiesto = false;
   bool fechaValida = true;

  if (mes < 1 || mes > 12) {
    fechaValida = false;
  }

   if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
     bisiesto = true;
   }

   if (ano < 2000 || ano > 9999){
     fechaValida = false;
   }

   if(mes == 2 && bisiesto){
     if(dia < 1 || dia > 29){
       fechaValida = false;
       }
   }else{
     if (dia < 1 || dia > dias[mes-1]){
       fechaValida = false;
       }
    }

    return fechaValida;
}

int main(){
  int dia = 12;
  int mes = 5;
  int ano = 2020;
  bool fechaValida = verificarFecha(0, 76, ano);
  if(fechaValida){
    printf("Fechado\n");
  }
  else{
    printf("violado! \n");
    }
    return 0;
}