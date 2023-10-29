#include<stdio.h>
int main()
{
	int n;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n],i,b[n],m=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	b[i]=a[n-1-i];
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
		m=1;
		else
		m=0;
	}
	if(m==1)
	printf("Palindrome Array");
	else
	printf("Not Palindrome Array");
}
	
