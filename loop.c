#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,l,m;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5-i;j++)
		printf(" ");
		for(k=1;k<=i-5;k++)
		printf(" ");
		if(i<=5)
		for(l=1;l<=(2*i)-1;l++)
		printf("*");
		if(i>=6)
		{
		for(m=1;m<=19-2*i;m++)
		printf("*");
	}
		printf("\n");
	}
	getch();
	return 0;
}