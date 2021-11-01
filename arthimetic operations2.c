#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g,h; 
	  a=10;
	  b=5;   
	 
      c=(a+b);
      d=(a-b);
      e=(a*b);
      f=(a/b);
      g=(a%b);
      h=c+d+e+g+h;
	printf("sum of two numbers of %d and %d is %d\n",a,b,c);
	printf("difference of two numbers  of %d and  %d is %d\n",a,b,d);
	printf("product of two numbers  of %d and  %d is %d\n",a,b,e);
	printf("quotient when  %d is divided with  %d is %d\n",a,b,f);
	printf("remainder when %d is divided with %d is %d\n",a,b,g);
	printf("sum of all arthimetic operations is %d",h);
}
