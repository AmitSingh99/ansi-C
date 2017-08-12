#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	int y,z;
	printf("enter any no.=");
	scanf("%f",&x);
	y=floor(x);
	z=y%10;
	printf("%d",z);
	return 0;
}
