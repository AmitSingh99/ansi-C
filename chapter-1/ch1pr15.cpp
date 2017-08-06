#include<stdio.h>
int main()
{
	float x,y,div,sum,diff,product;
	int no;
	printf("enter value of x and y =");
	scanf("%f%f",&x,&y);
	printf("1.sum\n2.div\n3.product\n4.diff\nenter value =");
	scanf("%d",&no);
	sum=x+y;
	div=x/y;
	product=x*y;
	diff=x-y;
	switch(no)
	{
		case 1:
			printf("%f",sum);
			break;
		case 2:
			printf("%f",div); 
			break;
		case 3:
		printf("%f",product);
		break;
		case 4:
		printf("%f",diff);
			
	}
	return 0;
}
