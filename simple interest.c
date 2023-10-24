#include<stdio.h>
int main()
{
	float a,r,i,prin;
	int t;
	printf("Enter principal amount");
	scanf("%f",&a);
	printf("enter rate of interest");
	scanf("%f",&r);
	printf("enter time period");
	scanf("%d",&t);
	prin=a;
	for(int j=1;j<=t;j++)
	{
		i=a*r*t/100; 
		a=a+i;
	}
	printf("total balance\t%f\n",a);
	printf("interest earned\t%f",a-prin);
	return 0;
}
		
		
	
		

