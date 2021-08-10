#include <stdio.h>
#include <stdlib.h>
int main()
{
int num;
printf("Ingresé el número de mes que le sea más comodo\n\n");
printf("1-Enero        7-Julio\n2-Febrero      8-Agosto\n3-Marzo        9-Septiembre\n4-Abril        10-Octubre\n5-Mayo         11-Noviembre\n6-Junio.       12-Diciembre\n\n");
scanf("%d",&num);

switch (num)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
puts ("\nEl mes contiene 31 dias");
break;

case 2:
puts ("\nEl mes contiene 28 dias");
break;

case 4:
case 6:
case 9:
case 11:
puts ("\nEl mes contiene 30 dias");
break;

default:
puts ("\nIntentelo de nuevo");
}


 return 0;
}