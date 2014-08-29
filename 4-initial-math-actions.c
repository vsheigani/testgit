// This project is an experimental project performed by Mr.Vahid Sheigani
// Dated In 2014.08.29

#include <stdio.h>

int main(){
	printf("This program needs 2 initial digit(s) to perform 4 initial math actions on them\n\n");


char z;
int i,j,x;
printf("Enter 1st Number:"); scanf("%d",&i);
printf("Enter 2nd Number:"); scanf("%d",&j);
printf("Enter action:"); scanf(" %c",&z);

switch(z){
	case '+': printf("This is the Resualt: %d\n",i+j);
	break;

	case '-': printf("This is the Resualt: %d\n",i-j);
	break;

	case '*': printf("This is the Resualt: %d\n",i*j);
	break;

	case '/': printf("This is the Resualt: %d\n",i/j);
	break;
	
	default: printf("The operator is not valid\n");

}
return 0;
}
