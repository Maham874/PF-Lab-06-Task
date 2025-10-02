#include <stdio.h>

int main() {
int i;
int num;
printf("Enter a number: ");
scanf("%d",&num);
for(i=1 ; i<=10 ; i++)
{
    printf("%d\tx\t%d\t=\t%d\n",num,i,num*i);
}
    return 0;
}