#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter three number : ");
	scanf("%d%d%d",&a,&b,&c);
	int max=(a>b&&a>c)?a:(b>c?b:c);
	int min=(a<b&&a<c)?a:(b<c?b:c);
	printf("Maximum value is %d",max);
	printf("Minimum value is &d",min);
	getch();
}
