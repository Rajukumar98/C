#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,l,n;
	printf("Enter a number(odd number):");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<=n/2+1)
		for(j=1;j<=n/2+2-i;j++)
		printf("*");
		else
		for(k=1;k<=i-n/2;k++)
		printf("*");
		printf("\n");
	}
	getch();
	return 0;
}