/*
NAME: EDWARD HAMILTON
REG NUMBER: PA106/G/28816/25
DESCRIPTION: PROGRAM TO DISPLAY WATER BILL CALCULATION
*/

#include<stdio.h>
    int CalculateElectricBill(int units){
	int billpaid;
    if(units <= 100){
		billpaid=(units*10);}
		
	else if(units > 100 && units <=200){
		billpaid=1000+(units-100)*15;}
		
	else{
		billpaid=2500+(units-200)*15;}
	
		return billpaid;		
  }
   
   void main(){
	   int units;
	   int bill;
	   
	   printf("Enter the units consumed: ");
	   scanf("%d",&units);

       bill= CalculateElectricBill(units);
	   
	   printf("The total bill is %d",bill);
   }