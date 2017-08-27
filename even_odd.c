#include<stdio.h>
#include<conio.h>
int main()
{
	unsigned int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num%2==0)
	printf("Even Number\n");
	else
	printf("Odd NUmber\n");
	getch();
	return 0;
}
