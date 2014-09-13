// This project is an experimental project developed by Vahid_Sheigani(Mr.)
// Dated is 2014.09.12  

#include <stdio.h>

int main(int argc, const char *argv[])
{
  printf("This Program detect if you've pressed Sedadar charcters or not:\nPlease enter 'q' for Quit\n");
  int i,n=100;
  char c;
  for (i = 0; i < n; i++) {
    scanf("%c",&c);
    if (c == 'a' || c == 'A' || c == 'o' || c == 'O'|| c == 'e' || c == 'E') 
    {
     printf("You've enter a sedadar key\n");
    }
    if (c == 'q')
    {
    printf("Time to Quit\n");
    break;
    }
  }
  return 0;
}
