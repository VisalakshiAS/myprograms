#include<stdio.h>
#include<string.h>

int main()
{
	char str[25];
	int i,j,l;

	printf("Enter the string...");
	scanf("%s",str);
	l=strlen(str);

	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(str[i]==str[j])
		{
			continue;
		}
		else
		{
			break;
		}
	}

	if(i>=j)
	{
		printf("%s is a Palindrome",str);
	}
	else
	{
		printf("%s is not a Palindrome",str);
	}
	return 0;
}
