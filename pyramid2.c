#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n,l;
	for(i=1;i<=5;i++)
	{
		n=5;
		for(j=1;j<=5-i;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		{
	    printf("%d",n);
	    n--;
		}
		n++;
		for(l=1;l<=i-1;l++)
		{
			n++;
			printf("%d",n);
			
		}
		printf("\n");
	}
	return 0;
}
