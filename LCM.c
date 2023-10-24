#include<stdio.h>
int main()
{
	int a,b,i,h=1,l=1;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a||i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		h=i;
	}
	a=a/h;
	b=b/h;
	l=a*b*h;
	printf("lcm=%d",l);
	
}