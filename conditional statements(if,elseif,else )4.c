#include<stdio.h>
void main()
{
	int marks;
	printf("enter the marks",marks);
	scanf("%d",&marks);
	if(marks>=80)
	{
		printf("A");
		
	}
	else if(marks>=70)
	{
		printf("B");
		
	}
	else if(marks>=60)
	{
		printf("C");
	}
	else if (marks>=50)
	{
		printf("D");
	}
	else 
	{
		printf("fail");
	}
}
