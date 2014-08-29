// This project is an experimental project performed by Mr.Vahid Sheigani
// Dated In 2014.08.29

#include <stdio.h>

int main (){
int k,j,z,i[5];
int x;
printf("This program needs 5 initial digit(s) to sort them from maximum to minimum\n\n");

for (j=0;j<5;j++){
printf("Please enter a new number: ");
    scanf("%d",&i[j]);
	for (k=0; k<j;k++){
		if (i[j]<i[k]){
		x=i[j];
		i[j]=i[k];
		i[k]=x;
	}
   }
}
for (z=0;z<5;z++)
printf("%d  ",i[4-z]);
printf("\n");
return 0;
}
