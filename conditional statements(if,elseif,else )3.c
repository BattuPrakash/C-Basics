//write a c program to tell which is largest number of given four numbers

#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter the four numbers",a,b,c,d);
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b && a>c  && a>d)
	{
		printf("%d is the largest number",a);
	}
	
	else if (b>a && b>c && b>d)
	{
		printf("%d is the largest number",b);
	
	}
	else if (c>a && c>b && c>d)
	{
		printf("%d is the largest number",c);
		
	}
	
	else 
	{
		printf("%d is the largest number",d);
	}
}
