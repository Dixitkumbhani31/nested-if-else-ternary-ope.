#include<stdio.h>

main()

{
	int a,b,c;
	printf("Enter value A=");
	scanf("%d",&a);
	printf("Enter value B=");
	scanf("%d",&b);
	printf("Enter value C=");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("A is Minimum");
		}
	   	else
	   	{
	   		printf("C is Minimum");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is Minimum");
		}
		else
		{
			printf("C is Minimum");
		}
	}
}
