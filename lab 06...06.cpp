#include <stdio.h>
int main ()
{
	int n = 7;
	int i;
	int isPrime = 1;
	
	for(i=2 ; i<n ; i++)
	{
		if(n % i == 0)
		{
			isPrime = 0;
		}
		break;
	}
	if (isPrime==1)  //checking truthy value
	{
		printf("%d is a prime number\n",n);
	}
	else
	{
		printf("%d is not a prime\n",n);
	}
}