/*
NAME; EDWARD HAMILTON OYIER
REG NUMBER;  PA106/G/28816/25
DESCRIPTION: PROGRAM TO DISPLAY PASSWORD ENTRY
*/
#include <stdio.h>
int main() {
    int password;
  do{
        printf("Enter your password:");
        scanf("%d", &password);
    }
    while (password != 1234);
        printf("Acess granted");

    return 0;
}