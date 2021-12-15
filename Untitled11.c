#include<stdio.h>
void main()
{
	int choice ,ac;
	int a,b;
	
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	printf(" enter your choice:\n1.Arthimetic\n2.Relational\n3.bitwise");
	scanf(" %d",&choice);
	switch(choice)
	{
	     case 1:
	     	printf("enter your choice \n1.+\n2.-\n3.*\n4./\n5.%%");
	     	scanf("%c",ac);
	     	switch(ac)
	     	{
	     	
			 case 'a':
			     	printf("%d",a+b);
			     	break;
			case 'b':
	     	        printf("%d",a-b);
	                break;
	        case 'c':
	                 printf("%d",a*b);
	                break;
	        case 'd':
	                  printf("%d",a/b);
	                  break;
	        case 'e':
	                   printf("%d",a%b);
	                   break;

			 }
	}
	
	
	
	
	
	






}
