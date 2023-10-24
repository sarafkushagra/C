#include<stdio.h>
int main()
{
	int i,n,count=0,a=2;
	printf("Enter last term");
	scanf("%d",&n);
	while(a<=n)
	{
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		count++;
	}
	if(count==2)
	printf("prime%d",a);
	else
	printf("not prime%d",a);
	a++;
}
	return 0;
}