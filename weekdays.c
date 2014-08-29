// This project is an experimental project performed by Mr.Vahid Sheigani
// Dated In 2014.08.29

#include <stdio.h>
int main(){

printf("This program needs 1 initial digit(s) to assign a weekday to it\n\n");

int z;

printf("Enter week day number:"); scanf("%d",&z);

switch(z){
	case 1: printf("This is the Resualt: %s\n","Shanbe");
	break;

	case 2: printf("This is the Resualt: %s\n","1Shanbe");
	break;

	case 3: printf("This is the Resualt: %s\n","2Shanbe");
	break;

	case 4: printf("This is the Resualt: %s\n","3Shanbe");
	break;
	
	case 5: printf("This is the Resualt: %s\n","4Shanbe");
	break;
	
	case 6: printf("This is the Resualt: %s\n","5Shanbe");
	break;
	
	case 7: printf("This is the Resualt: %s\n","Jome");
	break;
	
	default: printf("Not Valued\n");

}
return 0;
}
