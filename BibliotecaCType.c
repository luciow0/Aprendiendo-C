//
// Created by ruloc on 12/17/2024.
//

#include <stdio.h>
#include <ctype.h>
int main() {
  char c = 'A';

  if (isalnum(c)){ // verifica si c es alphanumerico
    printf("%c", c);
  }

  if (isalpha (c)){ // verifica si c esta en el alfabeto
    printf("%c", c);
    }

  if (isblank(c)){ // verifica si c es un espacio en blanco
    printf("%c", c);
    }

  if (iscntrl(c)){ // verifica si c es un caracter de control
    printf("%c", c);
  }

  if (isdigit(c)){ // verifica si c es un digito de base 10
    printf("%c", c);
  }

  if (islower(c)){ // verifica si c esta en minusculas
    printf("%c", c);
  }

  if (isprint(c)){ // verifica si c es imprimible
    printf("%c", c);
  }

  if (ispunct(c)){ // verifica si c es un caracter de puntuacion
    printf("%c", c);
  }

  if (isupper(c)){ // verifica si c esta en mayusculas
    printf("%c", c);
  }

  if (isxdigit(c)){ // verifica si c es un digito en base 16
    printf("%c", c);
  }

  if (tolower(c) == 'c'){ // convierte a c a minusculas
    tolower(c);
    };

  if(toupper(c) == 'C'){ // conbierte a c a mayusculas
    toupper(c);
    }

  return 0;
}
