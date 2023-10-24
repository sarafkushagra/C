#include<stdio.h>
int main()
{
	int n,f,s=0,r,nu ;
	printf("enter a number");
	scanf("%d",&n);
	nu=n;
	while(n>0)
	{
		f=1;
		r=n%10;
		for(int i=1;i<=r;i++)
		{
			f=f*i;
		}
		s=s+f;
		n=n/10;
	}
	if(nu==s)
	printf("strong number");
	else
	printf("not a strong number");
}