//A.P.
#include<stdio.h>
int main()
{
	int n,a,d,sum=0;
	printf("Enter number of terms");
	scanf("%d",&n);
	printf("enter first term");
	scanf("%d",&a);
	printf("enter common difference");
	scanf("%d",&d);
	for(int i=1;i<=n;i++)
	{
		sum=sum+a;
		printf("%d\t",a);
		a=a+d;	
	}
	printf("\nSum of given series:%d",sum);
	return 0;
}