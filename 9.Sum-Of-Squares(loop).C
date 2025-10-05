#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;

	clrscr();
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("\n%d",i*i);
	sum +=i*i;
	}
	printf("\n----------");
	printf("\n Total Is:%d",sum);
	getch();
}

