/*
NAME; EDWARD HAMILTON OYIER
REG NUMBER;  PA106/G/28816/25
DESCRIPTION: PROGRAM TO DISPLAY A WHILE LOOP AT AN ATM
*/

#include<stdio.h>
int main(){
     int balance,withdraw;
     
   printf("Enter your starting balance: ");
   scanf("%d",&balance);
   
   while(balance>0){
	   printf("\n Enter amount to withdraw: ");
	   scanf("%d",&withdraw);
	   
	   balance=balance-withdraw;
	   printf("Remaining balance: %d\n",balance);
	   
	   if (balance<= 0){
		   printf("\n Your account balance is insufficient \n");
	   }
   }
   printf("\n Transaction is complete. Account balance:%d \n",balance);

   return 0;
}