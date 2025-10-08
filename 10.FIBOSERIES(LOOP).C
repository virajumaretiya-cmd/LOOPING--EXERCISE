#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	int a=1,b=1,next;
	clrscr();
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	if(n>=1)printf("\n%d",a);
	if(n>=2)printf("\n%d",b);
	for(i=3;i<=n;i++)
	{
	next = a + b;
	printf("\n%d",next);
	a=b;
	b=next;
	}
	getch();
}