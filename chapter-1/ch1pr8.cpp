#include<stdio.h>
int main()
{
int a,b,c,x;
	printf("enter values of a,b,c=\n");
	scanf("%d%d%d",&a,&b,&c);
	x=a/(b-c);
	printf("%d",x);
	return 0;
}/*in first case answer should be 4.16 but it is 4 because we have used int instead of float */
//**in second program finds an error as denominator becomes 0 .
