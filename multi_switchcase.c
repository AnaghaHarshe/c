somthing default

#include<stdio.h>
int main()
{
	int age,marks;
	printf("Enter your age\n");
	scanf("%d",&age);
	
	printf("Enter you marks");
	scanf("%d",&marks);
	
	switch(age)
	{
		case 3:
		printf("the age is 3\n");
		switch(marks)
		{
			case 10:
			printf("Your marks are 45");
			
			
			default:
				printf("Your marks are not 45");
				
		}
		break;
		
		case 13:
			printf("the age is 13\n");
			break;
			
		case 23:
		   printf("the age is 23\n");
		   break;
		   
		default:
		   printf("Age is not 3,13 or 23\n");   	
	}

	return 0;
}
