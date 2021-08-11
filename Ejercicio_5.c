#include <stdio.h>
#include <stdlib.h>
int main()
{
int num;
printf("Ingresé un número del 1 al 12\n\n");
scanf("%d",&num);

switch (num)
{
case 1:
puts ("\nMes: Enero");
break;

case 2:
puts ("\nMes: Febrero");
break;

case 3:
puts ("\nMes: Marzo");
break;

case 4:
puts ("\nMes: Abril");
break;

case 5:
puts ("\nMes: Mayo");
break;

case 6:
puts ("\nMes: Junio");
break;

case 7:
puts ("\nMes: Julio");
break;

case 8:
puts ("\nMes: Agosto");
break;

case 9:
puts ("\nMes: Septiembre");
break;

case 10:
puts ("\nMes: Octubre");
break;

case 11:
puts ("\nMes: Noviembre");
break;

case 12:
puts ("\nMes: Diciembre");
break;

default:
puts ("\nIntentelo de nuevo");
}


 return 0;
}