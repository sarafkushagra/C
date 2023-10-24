//prime number
#include<stdio.h>
int main()
{
	int n,i,j,a;
	printf("ENTER THE LAST NUMBER:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		a=i;
		for(j=2;j<=a;j++)
		{
			if(a%j==0)
			break;
			else
			j++;
		}
		if(j>=a)
		printf("%d\n",i);
	}
	return 0;
}