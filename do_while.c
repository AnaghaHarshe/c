#include<stdio.h>
int main()
{
	int num,index=0; 
	printf("enter a number:-");
	scanf("%d",&num);
	
	do
	{
		printf("%d\t",index+1);
		index=index+1;
	}
	while(index<num);
	
	return 0;
}
