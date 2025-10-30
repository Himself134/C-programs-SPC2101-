/*
NAME:EDWARD HAMILTON
REG NUMBER:PA106/G/28816/25
DESCRIPTION:PROGRAM TO DISPLAY HOTEL MANAGEMENT SYSTEM USING ARRAYS
*/

#include <stdio.h>

int main()
{
    int revenue[7];
    
    printf("Enter 7 daily revenues received:\n");
    
    printf("\nMonday: ");
    scanf("%d", &revenue[0]);
    
    printf("Tuesday: ");
    scanf("%d", &revenue[1]);
    
    printf("Wednesday: ");
    scanf("%d", &revenue[2]);
    
    printf("Thursday: ");
    scanf("%d", &revenue[3]);
    
    printf("Friday: ");
    scanf("%d", &revenue[4]);
    
    printf("Saturday: ");
    scanf("%d", &revenue[5]);
    
    printf("Sunday: ");
    scanf("%d", &revenue[6]);
    
    int total = 0;
    int i = 0;
    while (i < 7) {
        total += revenue[i];
        i++;
    }
    
    float average = total / 7.0;
    
    printf("\nTotal revenue for the week: %d\n", total);
    printf("Average daily revenue: %.2f\n", average);
    
    return 0;
}
     
