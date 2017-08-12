#include<stdio.h>
int main()
{
	float ar,p,l,b;
	printf("enter length and breadth=");
	scanf("%f%f",&l,&b);
	ar=l*b;
	p=2*(l+b);
	printf("area=%f\nperimeter=%f",ar,p);
	return 0;
}
