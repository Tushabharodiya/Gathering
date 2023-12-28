#include<stdio.h>
int fac(int num)
{
	int factorial;
 	if(num<=1)
 	{
 		return 1;
	}
	else
	{
		factorial=num * fac(num-1);
		return factorial;
	}
}
main()
{
	int num;
	
	printf("Enter Vlaue Number = ");
	scanf("%d",&num);
	
	fac(num);
	
	printf("factorial Of = %d",fac(num));
}