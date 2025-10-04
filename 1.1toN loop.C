#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;

	printf("\n Enter A Number :");
	scanf("%d",&n);
	printf("\n Enter Number From 1 to %d are:");
	clrscr();
	for (i=1;i<=n; i++)
	{
	printf("\n%d",i);
	}
	getch();
}