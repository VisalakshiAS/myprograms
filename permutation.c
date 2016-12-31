#include<stdio.h>
#include<string.h>

int main()
{
	char str[25],ch;
	int i,j,l,count,flag=0;
	
	printf("Enter the string...");
	scanf("%s",str);
	l = strlen(str);
	
	for(i=0;i<l;i++)
	{
		count=1;
		if(str[i] != '\0')
		{
			ch = str[i];
		}
		else
		{
			continue;
		}
		for(j=i+1;j<l;j++)
		{
			if(str[j] == ch)
			{
				str[j] = '\0';
				count++;
			}
		}
		//printf("%d",count);
		if(count%2 == 0)
		{
			flag = 1;
		}
		else
		{
			if(flag == 2)
			{
				break;
			}
			else
			{
				flag = 2;
			}
		}
	}
	if( (flag == 1) || (flag == 2) )
	{
		printf("true");
	}
	else if(flag == 0)
	{
		printf("false");
	}
}
