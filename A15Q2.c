#include<stdio.h>
int SI(int);
int main()
{
	int result=SI(result);
	printf("your SI is %d",result);
	return 0;
}
 int SI(int SI)
 {
 	int P,R,T,si,result;
 	printf("enter the value P\n, enter the valu of T\n, enter the value of R\n");
 	scanf("%d%d%d",&P,&T,&R);
 	si=(P*R*T)/100;
 	result=si;
 	return result;

 }
