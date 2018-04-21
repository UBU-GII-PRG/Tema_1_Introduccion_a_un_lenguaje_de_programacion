/* Programa Hola Clase
Programa que muestra un saludo de mensaje por pantalla y el nombre del autor
Práctica 1 de Programación, 1º de Grado de Ingeniaría Informática
Diseñada para aprender a compilar C con gcc en Linux
version enero 2018
*/

#define AUTHOR "Paco Gonzalez Moya"
//cabecera de declaraciones de funciones estándar de entrada / salida
#include <stdio.h>

//programa
int
main ()
{
  printf ("Hola clase\n\t me llamo ");
  printf (AUTHOR);
  printf ("\n");
  return 0;
}
