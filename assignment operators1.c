#include<stdio.h>
void main()
{
	
	int x=10,y=4;
	x +=y;  //x=14 y=4
	y +=x;  //x=14 y=18
	x-=y;   //x=-4 y=18
	y *= x;
	
	printf("%d %d",x,y);
}
