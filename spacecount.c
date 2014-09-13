// This project is an experimental project developed by Vahid_Sheigani(Mr.)
// Dated is 2014.09.12 

#include <stdio.h>

int main(int argc, const char *argv[])
{
  char ch[50];
  int i,count;
  printf("This Program count spaces in a string\n\n");
  printf("Please enter a string:\n");
  for (i = 0; i < 49; i++) {
  scanf("%c",&ch[i]);
    if (ch[i] == ' ') {
      count++;
    }
    if (ch[i] == '\n') {
      break;
    }
  }
    printf("The spaces count is: %d\n",count);
    return 0;
}
