#include<stdio.h>
#include<math.h>
int main()
{
	float c,l,r,fr;
	printf("enter values of inductor and resistance =");
	scanf("%f%f",&l,&r);
	fr=sqrt((1/(l*c))-(pow(r,2))/4*pow(c,2));
	for(c=0.01;c<=0.1;c+=0.01)
	{
		printf("%f",fr);
	}
	return 0;
	
}
