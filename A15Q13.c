#include<stdio.h>
int main()
{
	int n,i,x;
	printf("enter the value= ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			n++;
		}
	}
		if(n==2)
		{
			printf("Prime number.");
		}
		else
		{
			printf("Not Prime.");
		}
	
	return 0;
}
