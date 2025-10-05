#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("\n%d",i);
	sum = sum + i;
	}
	printf("\n-----------------");
	printf("\n Total is  =%d",sum);

	getch();
}