#include<stdio.h>
main()
{
	int a,b=1;
	printf("enter any no.",a);
	scanf("%d",&a);
	while(a>0)
	{
		b=a*b;
		a--;
		printf("factorial; of no. is: %d ",b);
		
	}
	
}
