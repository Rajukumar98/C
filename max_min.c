#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 number :");
	scanf("%d%d%d",&a,&b,&c);
	int max=(a>b && a>c)?a:(b>c?b:c);
	int min=(a<b && a<c)?a:(b<c?b:c);
	printf("\nMaximum of 3 number is %d \nMinimum of 3 number is %d",max,min);
}