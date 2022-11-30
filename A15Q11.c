#include<stdio.h>
int lcm(int, int);
int main()
{
	int a,b,c;
	printf("enter the number too find lcm/n");
	scanf("%d%d",&a,&b);
	c = lcm(a,b);
	printf("%d this is the lcm of two positive intger\n",c);
	
}
int lcm(int a, int b)
{
	int c,l,i;
	for( i=1;i<=a && i<=b;++i)
	{
		if (a%i == 0 && b%i == 0)
		{
			c=i;
		}
	}
	l=(a*b)/c;
	return l;
}

