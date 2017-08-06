#include<stdio.h>
#include<math.h>
int main()
{
	float s,a,b,c,A;
	printf("enter the sides of triangle=");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle=%f",A);
	return 0;
}
