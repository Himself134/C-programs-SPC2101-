/*
Name: Edward Hamilton
Reg number:PA106/G/28816/25
Description:Voume And Surface_Area of a Cylinder
*/

#include<stdio.h>
   int main(){
	   float radius,height,volume,surface_area;
	   float pi=3.142;
	   printf("\n Enter the radius: ");
	   scanf("%f",&radius);
	   
	   printf("\n Enter the height: ");
	   scanf("%f",&height);
	   
       volume=3.142*radius*radius*height;
	   printf("\n Volume is %f ",volume);
	   
	   surface_area=(2*3.142*radius*radius) + (2*3.142*radius*height);
	   printf("\n Surface_area is %f ",surface_area);
	   
	   return 0;
   }