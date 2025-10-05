#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n Enter A Number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		if(i%2==0)
		{
		printf("\n%d",i);
		}
	}
	getch();
}