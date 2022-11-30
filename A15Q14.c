#include<stdio.h>
int main()
{
	int n,i,j,x;
	printf("enter the number=");
	scanf("%d",&n);
	for(i=n+1;i<=100;i++)
	{
		x=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				x=1;
				
			}
		}
		if(x==0)
		{
			printf("Enter The Next Prime Number is %d\n",i);
		}
	}
	return 0;
}
