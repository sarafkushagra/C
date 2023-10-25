#include<stdio.h>
int main()
{
	int n;
	printf("enter no of terms in array");
	scanf("%d",&n);
	int a[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++)
	{
		count=0;
		for(int k=0;k<n;k++)
		{
			if(a[j]==a[k])
			count ++;
		}
		printf("\nFrequency of %d is %d times",a[j],count);
	}
}
