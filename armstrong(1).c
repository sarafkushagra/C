#include<stdio.h>
#include <math.h>
int main()
{
	int n,r,c=0,nu,d=0,t,i;
	printf("enter the last number");
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	c=0;	
	d=0;	
	n=i;
	while(n>0)
	{
		n=n/10;
		d++;
	}
	n=i;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		c=c+(pow(r,d));
	}
	if(i==c)
	printf("armstrong %d\n",i);
    }
}
