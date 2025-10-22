/*
NAME :EDWARD HAMILTON
Reg : PA106\G\28816\25
DESCRIPTION : A PROGRAM THAT CONVERTS TEMPERETURE FROM DEGREES TO FAHRENHEIT 
*/
#include<stdio.h>

int main()
{
float fahrenheit;
int degree;

printf("Enter the temperature in fahrenheit :");
scanf("%f", &fahrenheit);

degree = ( fahrenheit - 32 ) * 5/9 ;

printf("\n Your temperature in degree is \n ");
printf("%d",degree);


return 0 ;
}