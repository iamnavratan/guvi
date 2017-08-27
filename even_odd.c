#include<stdio.h>
int main()
{
	unsigned int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num%2==0)
	printf("Even\n");
	else
	printf("Odd\n");
	return 0;
}
