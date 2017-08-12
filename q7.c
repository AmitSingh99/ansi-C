#include<stdio.h>
int main()
{
	float n;
	int x,y;
	printf("enter any no.=");
	scanf("%f",&n);
	x=floor(n);
	y=ceil(n);
	printf("%d %f %d",y,n,x);
	return 0;}
