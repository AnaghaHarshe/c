#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0; 
	char a[50],b[50];
    printf("Escape char='#'");
    printf("\nFlag='@'");
    printf("\nEnter data:-");
    printf("%s",a);
    b[j]='@';
    j++;
    while(a[j]!='\0')
    {
    	if(a[i]=='@'||a[i]=='#')
    	{
    		b[j]='#';
    		j++;
    		b[i]=a[i];
    		j++;
    		i++;
   		}
        else
        {
        	b[j]=a[i];
        	j++;
        	i++;
		}
	}
	b[j]='@';
	puts(b);
}
