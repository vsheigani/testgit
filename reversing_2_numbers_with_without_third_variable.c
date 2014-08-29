// This project is an experimental project performed by Mr.Vahid Sheigani
// Dated In 2014.08.29

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int x,i,j;
	char c;
	printf("This program needs 2 initial digits and reverse their variables\n\n");
	printf("Please enter first Number: ");
	scanf("%d", &i);
	
	printf("Please enter second Number: ");
	scanf("%d", &j);
	
printf("Please specify the Reversiation method:\nw for (With helpful variable)\no for (Without helpfl variable)\n");
scanf(" %c",&c);

switch (c) 
{
 	case 'w':
	// The Reversation process with 3rd varaiable
	   x=i;
	   i=j;
 	   j=x;
	printf("\nThe reversation made with getting help from 3rd variable:\n");
	printf("The first number is: %d\n",i);
	printf("The second number is: %d \n",j);
	break;

	case 'o':
	// The Reversation process without 3rd variable
	i=i+j;
	j=i-j;
	i=i-j;
	printf("\nThe reversation made without getting help from 3rd variable:\n");
        printf("The first number is: %d\n",i);
	printf("The second number is: %d \n",j);
	break;

	default:
	printf("Not valid option choosed\n");
	return 0;
}
}
