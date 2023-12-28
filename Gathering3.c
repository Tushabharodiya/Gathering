#include<stdio.h>
int length(int a[])
{
	int i,count=0;
	
	for(i=0;a[i]!=NULL;i++)
    {
    	count++;
	}	
	return count;
}
void main()
{
    int a[100] = {11, 26, 33, 47, 51,67,89,78,45,23,43,25}; 
    
	length(a);
    printf("Length Of Array = %d",length(a));
}