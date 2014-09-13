#include <stdio.h>

int main(int argc, const char *argv[])
{
	int r,n,i,Res=1;
	printf("Please enter paye: ");
	scanf("%d",&r);
	printf("Please enter tavan: ");
	scanf("%d",&n);
	for (i = 0; i <n ; i++) {
	Res = Res*r;	
	}
	printf("The Result is: %d\n",Res);
	return 0;
}
