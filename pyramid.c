#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,l;
	printf("Enter a number :");//size of pyramid
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		l=1;
		for(j=1;j<=i;j++)
		{
			printf("%d",l);
			l++;
		}
		printf("\n");
	}
	getch();
}