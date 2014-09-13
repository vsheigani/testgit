// This project is an experimental project developed by Vahid_Sheigani(Mr.)
// Dated is 2014.09.12  

#include <stdio.h>

int main(int argc, const char *argv[])
{
  int i,j,x,n,tavan=1,k;
  float fact=1,sum;
  printf("This program needs 2 initial digit(s) to provide Sum=x/1!+x^2/2!+x^3/3!+....+x^n/n! for you\n\n");
  printf("Please enter x: ");
  scanf("%d",&x);

  printf("Please enter n: ");
  scanf("%d",&n);
  for (i = 1; i <= n; i++) {
    for (k = 0; k < i; k++) {
      tavan= tavan * x;
    }
    for (j = 1; j <= i; j++) {
      fact=fact*j;
    }
      sum += (tavan/fact);
      fact=1;
      tavan=1;
  }
      printf("The Result of seri is: %f\n",sum);
      return 0;
}
