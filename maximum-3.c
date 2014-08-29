// This project is an experimental project performed by Mr.Vahid Sheigani
// Dated In 2014.08.29

#include <stdio.h>

int main(){
printf("This program needs 3 initial digit(s) to provide the maximum of these 3 numbers\n\n");

int i,j,z;
printf("Please enter the first number: ");
scanf("%d",&i);
printf("Please enter the second number: ");
scanf("%d",&j);
printf("Please enter the last number: ");
scanf("%d",&z);

if (i>j){
 	if(i>z)
printf("The Maximum Number is: %d\n",i);
	else{
		if(j>z)
	printf("The Maximum number is: %d\n",j);
		else 
	printf("The Maximum number is: %d\n",z);
	}
		}

	else{
		if(j>z)
	printf("The Maximum number is: %d\n",j);
		else 
	printf("The Maximum number is: %d\n",z);
}
}
