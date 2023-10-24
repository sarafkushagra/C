#include<stdio.h>
int main()
{
	int n,r,c=0,nu,d=0;
	printf("enter the number");
	scanf("%d",&n);
	nu=n;
	while(n>0)
	{
		n=n/10;
		d++;
	}
	n=nu;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		c=c+(pow(r,d));
	}
	if(nu==c)
	printf("armstrong");
	else
	printf("not armstrong");
	return 0;
}