// This project is an experimental project performed by Mr.Vahid Sheigani
// Dated In 2014.08.29

#include <stdio.h>

int main(){

printf("This program needs 3 initial digit(s) to provide different calculations:\n\n");

int a,b,c;
printf("Please enter 1st number: ");
scanf("%d",&a);
printf("Please enter 2nd number: ");
scanf("%d",&b);
printf("Please enter 3rd number: ");
scanf("%d",&c);

printf("\nPay attention to below results:\n");
printf("Summation of these 3 numbers result is: %d\n", a+b+c);
printf("Differences between 1st and 2nd is: %d\n", b-a);
printf("Differences between 1st and 3rd is: %d\n", c-a);
printf("2nd number multiply by 3rd number result is: %d\n", b*c);
printf("Product of these 3 numbers is: %d\n", a*b*c);
printf("E= 2AB+A-B %d\n", 2*a*b+a-b);
printf("F= A+B+10-4AB %d\n", a+b+10-(4*a*b));
printf("G= AB-2(A+B) %d\n", a*b-2*(a+b));
printf("H= 2A+2B-2AB %d\n", 2*a+2*b-(2*a*b));

return 0;

}
