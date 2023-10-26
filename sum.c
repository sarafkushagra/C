#include<stdio.h>
int main()
{
	int n,i;
	int so=0,se=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if (i%2==0)
		so=so+a[i];
		else
		se=se+a[i];
	}
	printf("sum of odd =%d",so);
	printf("sum of even =%d",se);

}
