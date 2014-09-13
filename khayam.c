#include <stdio.h>

int main(int argc, const char *argv[])
{	
	int i,j,x,n,s;
	printf("Please enter a number: ");\
	scanf("%d",&n);
	for (i = 1; i <= n; i++) {
			for (s = 0; s < n-i ; s++) {
			printf(" ");
			}
	
			for (j = 1; j <=i; j++) {
			printf("%d",j);
			}
			
			for (x = i-1; x > 0; x--) {
			printf("%d",x);
			}

			printf("\n");
	}

	return 0;
}
