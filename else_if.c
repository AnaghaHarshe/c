#include<string.h>
int main()
{
	int age;
	printf("enter your age");
	scanf("%d",&age);
	printf("you have enterd %d as your age\n",age);
	
	if(age>=18)
	{
    	printf("You can vote!");
	}
	else if(age<=10)
    {
    	printf("you are kid you can't");
	}
	else
	{
		printf("you are not eligibal for vote");
	}
	return 0;
}
