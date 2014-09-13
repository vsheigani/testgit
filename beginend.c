#include <stdio.h>

#define Begin {
#define end }
#define program main 

int program()
Begin
int i,j;
printf("Please enter first number: ");
scanf("%d",&i);
printf("Please enter second number: ");
scanf("%d",&j);
printf("This is the Result: %d\n",i+j);
return 0;
end
