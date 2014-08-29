// This project is an experimental project performed by Mr.Vahid Sheigani
// Dated In 2014.08.29

#include <stdio.h>

int main(){
int a,b,c;
printf("This program needs 3 sides of a triangle and detect if this triangle is Orthorhombic or not\n\n");

printf("Please enter the 1st side: ");
scanf("%d",&a);
printf("Please enter the 2nd side: ");
scanf("%d",&b);
printf("Please enter the 3rd side: ");
scanf("%d",&c);

if ((a*a)+(b*b)==(c*c))
printf("\nYes,Wooollllaaaa\n");
else
printf("\nNo,Not a good choise\n");

return 0;
}
