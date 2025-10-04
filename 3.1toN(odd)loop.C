// w a p to print 1 to n odd numbers

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf ("\n Enter A Number :");
	scanf("%d",&n);
	printf("\n Odd Number From 1 to %d are:-");
	clrscr();
	for(i=1;i<=n;i++)
	{
	if(i%2!=0)
	{
	printf("\n%d",i);
	}
	}
	getch();
}