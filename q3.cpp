#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	int y,z;
	printf("enter the value of x=");
	scanf("%f",&x);
	y=floor(x);
	z=y%100;
	printf("%d",z);
	return 0;
}
