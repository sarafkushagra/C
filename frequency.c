#include<stdio.h>
int main()
{
	int n,n1,n2,r1,r2,f=0;
	printf("enter number");
	scanf("%d",&n);
	n1=n;
	n2=n;
	while(n>0)
	{
		r1=n%10;
		n=n/10;
		n1=n2;
		f=0;
		while(n1>0)
		{
			r2=n1%10;
			if(r1==r2)
			f++;
			n1=n1/10;
		}
		printf("Frequency of number %d is %d\n",r1,f);
	}
	return 0;
}