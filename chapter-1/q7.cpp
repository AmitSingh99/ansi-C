#include<stdio.h>
int add(int,int);
int sub(int,int);
int main()
{
	int a=20,b=10,c,d;
	
	c=add(a,b);
	d=sub(a,b);
	printf("20+10=%d\n20-10=%d",c,d);
	return 0;
	}
	int add(int x,int y)
	{int t;
	t=x+y;
	return t;
		
	}
	int sub(int x,int y)
	{int h;
	h=x-y;
	return h;
	}
	
	
	


