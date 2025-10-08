#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,term=1,diff=1;
	clrscr();
	printf("\n Enter The Number Of Terms:");
	scanf("%d",&n);
	printf("%d",term);

	for(i=2;i<=n;i++)
	{
	term = term +diff;
	diff++;
	printf("\n%d",term);
	}
	getch();
}