//Program to display my height, ID number and Bank balance
/*
Name;Edward Hamilton
Reg No;PA106\G\28816\25
Description;Program to display my height, ID number and Bank balance
*/
#include<stdio.h>
int main(){
	int height;
	int Id_number;
	int bank_balance;
	int phone_number;
	
	printf("Enter your height: ");
	scanf("%d",&height);
	printf("Your height is %d\n",height);
	
	printf("Enter your id_number: ");
	scanf("%d",&Id_number);
    printf("Your Id number is %d \n",Id_number);
    
    printf("Enter your bank balance: ");
    scanf("%d",&bank_balance);
    printf("Your bank_bakance is %d\n",bank_balance);
    
    printf("Enter your phone_number: ");
    scanf("%d",&phone_number);
    printf("Your phone number is %d",phone_number);
	
	return 0;
} 