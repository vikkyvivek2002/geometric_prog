#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,i,sum =0;
	printf("enter the limit n :");
	scanf("%d",&n);
	printf("enter the value of x\n");
	scanf("%d",&x);
	if(x<0 || n<0)
	printf("illegal value");
	else
	{
	   for(i= 0; i<=n; i++)
	   sum = sum + pow(x,i);	
	}
	printf("sum = %d", sum );
	return 0;                            
}