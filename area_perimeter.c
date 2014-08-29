// This project is an experimental project performed by Mr.Vahid Sheigani
// Dated In 2014.08.29

#include <stdio.h>
int main(){

char z;
float i,j;
printf("Please choose one of the below options:\nc for (Circle)\nr for (Rectangle)\nt for (Triangle)\ns for (Sphere):");

scanf(" %c",&z);

switch(z){
	case 'c': 
	printf("\nYou've choosed Circle\n");
	printf("Please enter Radius of Circle: ");
	scanf("%f", &i);
	printf ("The Enviroment is: %f\n",6.28*i);	
	printf("The Space is: %f\n", 3.14*i*i);
	break;

	case 'r': 
	printf("\nYou've choosed Rectangle\n");
	printf("Please enter lentgh: ");
	scanf("%f", &i);
	printf("Please enter width: ");
	scanf("%f", &j);
	printf ("The Enviroment is: %f\n",2*i+2*j);	
	printf("The Space is: %f\n", i*j);
	break;

	case 't': 
	printf("\nYou've choosed Triangle\n");
	printf("Please enter the base of triangle: ");
	scanf("%f", &i);
	printf("Please enter the height: ");
	scanf("%f", &j);
	printf("The space is: %f\n", i*j/2);
	break;

	case 's': 
	printf("\nYou've choosed Sphere\n");
	printf("Please enter Radius of Sphere: ");
	scanf("%f", &i);
	printf ("The Enviroment is: %f\n",3*i*3.14);	
	printf("The Space is: %f\n", 3.14*i*i*i);
	break;

	default: printf("The Entry is Wrong\n");

}
return 0;
}
