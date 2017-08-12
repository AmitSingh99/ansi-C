#include<stdio.h>
int main()
{
	float depri,pp,yos,sv;
	printf("enter value of depriciation,purchase price,years of service");
	scanf("%f%f%f",&depri,&pp,&yos);
	sv=pp-(depri*yos);
	printf("%f",sv);
	return 0;
}
