#include <stdio.h>


int main(int argc, const char *argv[])
{
	int Res=1,i,n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	for (i = 1; i <=n; i++) {
	Res= Res*i;
		
	}
	printf("The Result is: %d\n", Res);
	return 0;
}
