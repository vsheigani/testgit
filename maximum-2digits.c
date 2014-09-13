// This project is an experimental project developed by Vahid_Sheigani(Mr.)
// Dated is 2014.09.12 
#include <stdio.h>

int main(int argc, const char *argv[])
{
  printf("This program needs 2 initial digit(s) to provide the maximum for you without using if statement:\n\n");
  int i,j;
  printf("Please enter first number: ");
  scanf("%d",&i);
  printf("Please enter second number: ");
  scanf("%d",&j);
  printf("This is the result: %d\n",(i>j)? i : j);
  return 0;
}
