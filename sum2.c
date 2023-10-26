#include<stdio.h>
int main()
{
	int a[8];
	int i;
	for(i=0;i<8;i++)
	scanf("%d",&a[i]);
	int n,j,k,sum;
	printf("enter sum");
	scanf("%d",&n);
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			{
			for(k=j+1;k<8;k++)
			{
				sum=a[i]+a[j]+a[k];
				if(sum==n)	
				{
					printf("\n %d %d %d",a[i],a[j],a[k]);
				}
			}
		  }
		}
	}
}
