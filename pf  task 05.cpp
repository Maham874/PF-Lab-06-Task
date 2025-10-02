#include <stdio.h>
int main (){
	int n=5;
	int i;
	int fact=1;
	for(i=1 ; i<=n ; i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}