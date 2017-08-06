#include<stdio.h>
int main()
{
	float n,sum=0;
	printf("enter any no.=");
	scanf("%f",&n);
	for(;n>0;n--)
	{
	sum=sum+1/n;
}
printf("%f",sum);
	return 0;
	
	
	
	
}
