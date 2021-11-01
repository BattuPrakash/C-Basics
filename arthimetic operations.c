#include<stdio.h>
void main()
{
	int a=10;
	int b=5;
   
  int s=(a+b)+(a-b)+(a*b)+(a/b)+(a%b);
    
    
	printf("sum of two numbers of %d and %d is %d\n",a,b,a+b);
	printf("difference of two numbers  of %d and  %d is %d\n",a,b,a-b);
	printf("product of two numbers  of %d and  %d is %d\n",a,b,a*b);
	printf("quotient when  %d is divided with  %d is %d\n",a,b,a/b);
	printf("remainder when %d is divided with %d is %d\n",a,b,a%b);
	printf("sum of all arthimetic operations is %d",s);
}
	

