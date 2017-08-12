#include<stdio.h>
#include<math.h>
int main()
{
	float EOQ,TBO,dr,sc,hcpu;
	printf("enter demand rate,setupcost and holding cost per unit time=");
	scanf("%f%f%f",&dr,&sc,&hcpu);
	EOQ=sqrt(((2*dr*sc)/hcpu));
	TBO=sqrt((2*sc)/(dr*hcpu));
	printf("EOQ=%f , TBO=%f",EOQ,TBO);
	return 0;
}
