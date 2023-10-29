#include<stdio.h>
int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	scanf("%d",&a[i]);
	int max=0;
	for(int i=0;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	int smax=0;
	for(int i=0;i<5;i++)
	{
		if(a[i]>smax&&a[i]!=max)
		smax=a[i];
	}
	printf("%d",smax);
	
}
