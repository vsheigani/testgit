// This project is an experimental project developed by Vahid_Sheigani(Mr.)
// Dated is 2014.09.12 

#include <stdio.h>

int main(int argc, const char *argv[])
{
  char ch[50];
  int i,count=0,num=0;
  printf("This Program count words with 3 characters in a string\n\n");
  printf("Please enter a string:\n");
  for (i = 0; i < 49; i++) {
  scanf("%c",&ch[i]);
    if (ch[i] != ' ') {
      count++;
    }
    else {
    if (count == 3) {   
    num++;
    }
    count=0;
    }
    if (ch[i] == '\n') {
      break;
    }
  }
    printf("The words with 3 characters count is: %d\n",num);
    return 0;
}
