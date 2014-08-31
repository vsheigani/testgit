// This project is an experimental project performed by Mr.Vahid Sheigani
// Dated In 2014.08.29

//Hello
#include <stdio.h>
int main(){

int c,z;
printf("This program needs 1 initial digit(s) to make decision accordingly\n\n");

printf("Please enter a number: ");
scanf("%d",&z);

        while(z==0){
        printf("Enter new number: ");
	scanf("%d",&z);
	}
if (z<0)
c=-1;
if (z>0)
c=1;

switch(c){
case -1:
       printf("\nGhadre motlagh is: %d\n", z*-1);
	break;
case 1: 
       printf("\nTavane 2 is: %d\n", z*z);
	break;
}
return 0;

}
