// This project is an experimental project developed by Vahid_Sheigani(Mr.)
// Dated is 2014.09.12  

#include <stdio.h>

int main(int argc, const char *argv[])
{
  printf("This Program detect if you've pressed Enter Key or not:\n");
  int i,n=100;
  char c;
  for (i = 0; i < n; i++) {
    scanf("%c",&c);
    if (c == '\n') 
    {
     printf("You've pressed enter\n");
     break;
    }
  }
  return 0;
}
