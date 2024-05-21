#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:-");
	scanf("%d",&age);
	
	switch(age)
	{
		case 1:
		printf("the age is 3\n");
		break;
		
		case 2:
			printf("the age is 13\n");
			break;
			
		case 3:
		  printf("the age is 23\n");
		  break;
		  
		default:
		printf("the age is defalut");
		break;  	
	}
	return 0;
}
