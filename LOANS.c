/*
NAME:EDWARD HAMILTON
REG NUMBER:PA106/G/28816/25
DESCRIPTION:PROGRAM TO DETERMINE THE LOAN REQUIREMENT
*/

#include<stdio.h>
   int main(){
   	int age;
   	double income;
   	
   	printf("\n Enter your age: ");
   	scanf("%d",&age);
   	
   	printf("\nEnter you income: ");
   	scanf("%lf",&income);
   	
   	if(age>=21 && income>=21000){
   	printf("\n Congatulations you qualify for a loan");
    } else{
   	printf("\n Unfortunately,we are unable to offer yu a loan at this time");
	}
   	
   	return 0;
   }