// This project is an experimental project performed by Mr.Vahid Sheigani
// Dated In 2014.08.29

#include <stdio.h>


int main (){
int z=0,j,i[5];
double ff;
int x;

printf("This program needs 5 initial digit(s) to provide the summation and average of them\n\n");
for (j=0;j<5;j++){
printf("Please enter new number: ");
    scanf("%d",&i[j]);
	z=z+i[j];
   }
ff=z/5;
printf("Sum: %d Average:%f \n " , z,ff);
return 0;
}
