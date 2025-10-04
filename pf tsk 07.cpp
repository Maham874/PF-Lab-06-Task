#include<stdio.h>
main ()
{
	int n=10;
	int a=0;
	int b=1;
	int c;
	printf("Fibonacci Series upto %d terms\n ",n);
	
	for (int i=1 ; i<=n ; i++)
	{
		printf("%d " ,a);
		
		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}