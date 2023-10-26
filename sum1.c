#include<stdio.h>
int main()
{
	int a[8];
	int i;
	for(i=0;i<8;i++)
	scanf("%d",&a[i]);
	int n,j,sum;
	printf("enter sum");
	scanf("%d",&n);
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(i!=j)
			sum=a[i]+a[j];
			if(sum==n)
			printf("\n%d %d",a[i],a[j]);
		}
	}
}
