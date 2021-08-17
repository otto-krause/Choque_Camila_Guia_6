
#include <stdio.h>
#include <stdlib.h>
int main()
{
int day,mes;

printf("1-Enero        7-Julio\n2-Febrero      8-Agosto\n3-Marzo        9-Septiembre\n4-Abril        10-Octubre\n5-Mayo         11-Noviembre\n6-Junio.       12-Diciembre\n\n");
printf("Ingrese el número de su mes de nacimiento: ");
scanf("%d",&mes);
printf ("\nIngrese el día de su nacimiento (Del 1 al 31): ");
scanf ("%d",&day);

switch (mes)
{
case 1:
if (day>0 && day<20)
{
puts ("\nSu signo zodiacal es Capricornio");
}
else
{
if (day>19 && day<=31)
{
puts ("\nSu signo zodiacal es Acuario"); 
}
}
break;

case 2:
if (day>0 && day<19)
{
puts ("\nSu signo zodiacal es Acuario");
}
else
{
if (day>18 && day<=28)
{
puts ("\nSu signo zodiacal es Piscis"); 
}
}
break;

case 3:
if (day>0 && day<21)
{
puts ("\nSu signo zodiacal es Piscis");
}
else
{
if (day>20 && day<=31)
{
puts ("\nSu signo zodiacal es Aries"); 
}
}
break;

case 4:
if (day>0 && day<20)
{
puts ("\nSu signo zodiacal es Aries");
}
else
{
if (day>19 && day<=30)
{
puts ("\nSu signo zodiacal es Tauro"); 
}
}
break;

case 5:
if (day>0 && day<21)
{
puts ("\nSu signo zodiacal es Tauro");
}
else
{
if (day>20 && day<=31)
{
puts ("\nSu signo zodiacal es Geminis"); 
}
}
break;

case 6:
if (day>0 && day<21)
{
puts ("\nSu signo zodiacal es Geminis");
}
else
{
if (day>20 && day<=30)
{
puts ("\nSu signo zodiacal es Cancer"); 
}
}
break;

case 7:
if (day>0 && day<23)
{
puts ("\nSu signo zodiacal es Cancer");
}
else
{
if (day>22 && day<=31)
{
puts ("\nSu signo zodiacal es Leo"); 
}
}
break;

case 8:
if (day>0 && day<23)
{
puts ("\nSu signo zodiacal es Leo");
}
else
{
if (day>22 && day<=31)
{
puts ("\nSu signo zodiacal es Virgo"); 
}
}
break;

case 9:
if (day>0 && day<23)
{
puts ("\nSu signo zodiacal es Virgo");
}
else
{
if (day>22 && day<=30)
{
puts ("\nSu signo zodiacal es Libra"); 
}
}
break;

case 10:
if (day>0 && day<23)
{
puts ("\nSu signo zodiacal es Libra");
}
else
{
if (day>22 && day<=31)
{
puts ("\nSu signo zodiacal es Escorpio"); 
}
}
break;

case 11:
if (day>0 && day<22)
{
puts ("\nSu signo zodiacal es Escorpio");
}
else
{
if (day>21 && day<=30)
{
puts ("\nSu signo zodiacal es Sagitario"); 
}
}
break;

case 12:
if (day>0 && day<22)
{
puts ("\nSu signo zodiacal es Sagitario");
}
else
{
if (day>21 && day<=31)
{
puts ("\nSu signo zodiacal es Capricornio"); 
}
}
break;

default:
puts ("\nIntentelo de nuevo");
}


 return 0;
}