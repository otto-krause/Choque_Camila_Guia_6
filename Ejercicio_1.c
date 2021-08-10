#include <stdio.h>
#include <stdlib.h>
int main()
{
char Letra;
printf("Introduzca su calificación correspondiente: ");
Letra=getchar ();
switch (Letra)
{
case 'a':
case 'A':
puts ("\nExcelente");
break;

case 'b':
case 'B':
puts ("\nBuena");
break;

case 'c':
case 'C':
puts ("\nRegular");
break;

case 'd':
case 'D':
puts ("\nSuficiente");
break;

case 'f':
case 'F':
puts ("\nNo suficiente");
break;

default:
puts ("\nIntentelo de nuevo");
}


 return 0;
}