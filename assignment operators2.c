#include<stdio.h>
void main()
{
	int x=5, y=10, z=2;
	x *= y; //x=50, y=10
	y -= x; //x=50, y=-40
	x *= y; //x=-2000,y=-40
	x %= y; //x=0,y=-40
	x *=y;  // x=0, y=-40
	x +=y;  //x=-40,y=-40
	y -=x;  //x=-40 y=0
	y +=z;  //x=-40,y=+2,z=2
	
	
	
	printf("%d %d %d",x,y,z);
}
