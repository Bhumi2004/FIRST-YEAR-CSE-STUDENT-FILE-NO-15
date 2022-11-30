#include<stdio.h>
int main()
{
	int a,b,i,j,x;
	printf("enter the number to find prime number between them \n");
	scanf("%d%d",&a,&b);
	for(i=a+1;i<=100;i++)
	{
		x=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0&&j==b+1)
			{
				x=1;
				break;
			}
		}
		if(x==0)
		{
			printf("the prime number between a and b is %d\n",i);
		}
	}
	return 0;
	
}
