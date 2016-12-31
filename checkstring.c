#include<stdio.h>

int main()
{
	char st[50],nst[50],ch;
	int i,j=0,l=0;

	printf("Enter the string...");
	scanf("%c",&ch);
	while(ch != '\n')
	{
		st[l++] = ch;
		scanf("%c",&ch);
	}

	for(i=0;i<l;i++)
	{
		ch = st[i];
		if((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u')||(ch == 'A')||(ch == 'I')||(ch == 'O')||(ch == 'U')||(ch == ' '))
		{
			continue;
		}
		else if( !( (ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9') ) )
		{
			continue;
		}
		else
		{
			nst[j] = ch;
			j++;
		}
	}
	printf("%s",nst);
	return 0;
}
