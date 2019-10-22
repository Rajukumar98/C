#include<stdio.h>
void gl(int x,int y,int z)
{
	int g,l;
    if(x>y)
	{
	    if(y>z)
		{
			g=x;
			l=z;
		}	
		else if(z>y)
		{
		l=y;
		g=x;	
		}
	}
	else if(x>z)
	{
		l=z;g=y;
	}		
	else if(z>x && y>x)
		l=x;
	else if(z>x && z>y)
	g=z;
	printf("\nGreatest and lowest number are %d,%d",g,l);	
	}
void max(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
			return a;
	}
	else if(b>c)
		return b;
	else
		return c;
		

int main()
{
	int a,b,c;
	printf("Enter three number : ");
	scanf("%d%d%d",&a,&b,&c);
	gl(a,b,c);
	printf("%d",max(a,b,c));
	return 0;
}
