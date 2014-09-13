// This project is an experimental project developed by Vahid_Sheigani(Mr.)
// Dated is 2014.09.12  

#include <stdio.h>

int main(int argc, const char *argv[])
{
  int i,j,n;
  float fact=1,sum;
  printf("This program needs 1 initial digit(s) to provide Sum=1/1!+1/2!+1/3!+....+1/n! for you\n\n");
  printf("Please enter a number: ");
  scanf("%d",&n);
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      fact=fact*j;
    }
      sum += (1/fact);
      fact=1;
  }
      printf("The Result of seri is: %f\n",sum);
      return 0;
}
