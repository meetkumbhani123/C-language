#include<stdio.h>
void main()
{
	int u,sum=0;
	printf("enter the u");
	scanf("%d",&u);
	if(u<50)
	{
	
	sum=u*0.50;
	
}
		
		
			else if(u>50 && u<150)
		{
			sum=(50*0.5)+(u-50)*0.75;
			
		}
			
			else if(u>150 && u<250)
				{
				
				sum=((50*0.5)+(u-50)*0.75)+(u-100)*1.20;
			
		}
				else
			{
			
							
					sum=((50*0.5)+(u-50)*0.75)+((u-100)*1.20)+((250-u)*1.50);
				
				
			}
			sum=sum+(sum*0.2);
			printf("%d",sum);
		}
				
			
				
			
	
