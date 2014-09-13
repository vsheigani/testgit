// This project is an experimental project developed by Vahid_Sheigani(Mr.)
// Dated is 2014.09.12 



# include <stdio.h>
 
 int main()
 {
    int n, first = 0, second = 1, next, c;
    printf("This program needs 1 initial digit(s) to provide Fibonacci Series for you\n\n");  
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("First %d terms of Fibonacci series are :\n",n);
    for ( c = 0 ; c < n ; c++ )
    {
    if ( c <= 1 )
    next = c;
    else
    {
    next = first + second;
    first = second;
    second = next;
    }
    printf("%d\n",next);
    }                                                                           return 0;
 }
