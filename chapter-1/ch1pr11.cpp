#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,D,a,b;
	printf("enter two ptshaving coordinates (x1,y1) and(y1,y2)= ");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	a=pow(x2-x1,2);
	b=pow(y2-y1,2);
	D=sqrt(a+b);
	printf("%f",D);
	return 0;
	
}
