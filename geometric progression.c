#include<stdio.h>
int main()
{
	int n,cr,sgp=0,no;
	printf("Enter first term:");
	scanf("%d",&n);
	printf("enter common ratio:");
	scanf("%d",&cr);
	printf("enter number of terms");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		printf("%d\t",n);
		sgp=n+sgp;
		n=n*cr;
	}
	printf("\nsum of series:%d",sgp);
	
}