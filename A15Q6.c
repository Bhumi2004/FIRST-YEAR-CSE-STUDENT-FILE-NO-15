#include<stdio.h>
int factorial(int);
int main()
{
	int result=factorial(result);
	printf("your calculated factorial answer is %d",result);
	return 0;
}
int factorial(int factorial)
{
	int fact=1,i,num,result;
	printf("enter the num\n");
	scanf("%d\n",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		printf("\n%d\n",fact);
	}
	result=fact;
	return result;
}
	

