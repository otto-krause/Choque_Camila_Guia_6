#include <stdio.h>
#include <stdlib.h>
int main()
{
int num;
printf("Ingresé un número del 1 al 7\n\n");
scanf("%d",&num);

switch (num)
{
case 1:
puts ("\nDia=Lunes");
break;

case 2:
puts ("\nDia=Martes");
break;

case 3:
puts ("\nDia=Miércoles");
break;

case 4:
puts ("\nDia=Jueves");
break;

case 5:
puts ("\nDia=Viernes");
break;

case 6:
puts ("\nDia=Sabado");
break;

case 7:
puts ("\nDia=Domingo");
break;

default:
puts ("\nIntentelo de nuevo");
}


 return 0;
}