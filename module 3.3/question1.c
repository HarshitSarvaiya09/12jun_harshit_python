#include<stdio.h>
int harshit();
int main()
{
	harshit();
}
int harshit()
{
	int array[9],i;
	for(i=0;i<9;i++)
	{
		printf("enter the nine number");
		scanf("%d",&array[i]);
	}
	int max;
	max=array[0];
	for(i=0;i<9;i++)
	{
		if(max<array[i])
	{
		max=array[i];
	}
		}
		printf("%d is max",max);
		return 0;	
}

