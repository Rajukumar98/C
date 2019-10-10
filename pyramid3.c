#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=9;i++)
	{
		if(i<=5)
		for(j=1;j<=6-i;j++)
		printf("*");
		else
		for(k=1;k<=i-4;k++)
		printf("*");
		printf("\n");
	}
	getch();
	return 0;
}