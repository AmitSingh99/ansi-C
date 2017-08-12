#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the values of x,y,z=");
	scanf("%d%d%d",&x,&y,&z);
	x=y+x+z;
	y=x-(y+z);
	z=x-(x+z);
	x=
	printf("%d\n%d\n%d",x,y,z);
	return 0;
}
