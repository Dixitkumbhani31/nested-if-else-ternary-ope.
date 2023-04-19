#include<stdio.h>

main()

{
	int a,b,c,d,e;
	printf("Enter value A=");
	scanf("%d",&a);
	printf("Enter value B=");
	scanf("%d",&b);
	printf("Enter value C=");
	scanf("%d",&c);
	printf("Enter value D=");
	scanf("%d",&d);
	printf("Enter value E=");
	scanf("%d",&e);
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("A is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("B is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is Minimum");
				}
				else
				{
					printf("E is Minimum");
			    }
			}
			else
			{
				if(d<e)
				{
					printf("D is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
				
			}
			
		}
		
	}
	
}
