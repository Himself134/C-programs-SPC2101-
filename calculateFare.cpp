
/*
NAME:EDWARD HAMILTON
REG : PA106/G/28816/25
DESCRIPTION : A PROGRAM THAT CALCULATES FARE
*/

#include<stdio.h>
int main()
{
int fare;
int kilometers;

printf("Enter the distance to be travelled in kilometres :");
scanf("%d",&kilometers); 

fare = kilometers* 50 ;

printf("\nYOUR FARE IS KSH:");
printf("%d",fare);

return 0;
}