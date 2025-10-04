#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n Enter A Number:");
	scanf("%d",&n);
	printf("\n Enter  Number From %d to 1 Is Are:");
	for(i=n;i>=1;i--)
	{
	printf("\n%d",i);
	}
	getch();
}