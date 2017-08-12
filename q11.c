#include<stdio.h>
#include<math.h>
int main()
{
	int n,l,sl,tl,fl,sum;
	printf("enter 4 digit no.");
	scanf("%d",&n);
    l=n%10;
    sl=floor((n%100)/10);
    tl=floor((n%1000)/100);
    fl=floor((n%10000)/1000);
    sum=l+sl+tl+fl;
    printf("%d",sum);
    return 0;
	}
