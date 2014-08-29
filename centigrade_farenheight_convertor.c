// This project is an experimental project performed by Mr.Vahid Sheigani
// Dated In 2014.08.29

#include <stdio.h>

int main(){
printf("This program get centigrade temprature from you and convert it to farenheight\n\n");

int c; float f;
printf("Please enter temprature in centigrade: ");
scanf("%d",&c);

f= (c*1.8)+32;
printf("The Temprature in Farenheight is : %f\n",f);
return 0;
}
