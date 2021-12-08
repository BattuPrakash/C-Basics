#include<stdio.h>
void main ()
{
	int eng,mat,phy,che,cs,sum,total;
	printf("enter the marks");
	scanf("%d%d%d%d%d",&eng,&mat,&phy,&che,&cs);
	total= eng+mat+phy+che+cs;
     double	perc=total*1.0/5;
	printf("enter the marks\n");
	
	
	if( eng>=28&&mat>=28&&phy>=28&&che>=28&&cs>=28)
	{
		printf("student is pass\n");
		printf("total marks out of 100 is %d\n",total);
		printf("percentage is %lf\n",perc);
		printf("grade:");
		if(perc>=90)
		{
			printf("0");
		}
	 else if(perc>=80)
		{
			printf("A");
			
		}
	else	if(perc>=70)
		{
			printf("B");
		}
	else	if(perc>=60)
		{
			printf("C");
		}
		else
			printf("E");
		}
	

	 else
	{
			printf("student is fail");
	}
}
