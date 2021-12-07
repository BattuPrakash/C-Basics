// write a c program to print the name of the weekend when corresponding
//number is given  

#include<stdio.h>
void main()
{
int n;
printf("enter a number",n);
scanf("%d",&n);

if(n==1)
{
  printf("%d is monday",n);
  
}
else if(n==2)
{
	printf("%d is tuesday",n);
}
else if (n==3)
{
	printf("%d is wednesday",n);
}
else if (n==4)
{
	printf("%d is thursday",n);
}
else if (n==5)
{
	printf("%d is friday",n);
	
}
else if(n==6)
{
	printf("%d is saturday",n);
}
else if (n==7)
{
printf("%d is saturday",n);
}
else
{
	printf("%d is invalid input",n);
}
}
