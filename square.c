#include<stdio.h>
#include<conio.h>

void swap(int*,int*);
void printsqr(int[4][4]);

int main()
{
	int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int i=3,j=3;
	char ch;
	clrscr();

	printsqr(arr);
	printf("\nEnter an option...\nU/D/L/R or Q(quit)");
	scanf("%c",&ch);

	while( (ch != 'Q') && (ch != 'q') )
	{
		switch(ch)
		{
			case 'U':
			case 'u':	if(i!=0)
					{
						swap(&arr[--i][j],&arr[i][j]);
					}
					break;

			case 'D':
			case 'd':	if(i!=3)
					{
						swap(&arr[++i][j],&arr[i][j]);
					}
					break;

			case 'L':
			case 'l':	if(j!=0)
					{
						swap(&arr[i][--j],&arr[i][j]);
					}
					break;

			case 'R':
			case 'r':	if(j!=3)
					{
						swap(&arr[i][++j],&arr[i][j]);
					}
					break;

			default:	printf("Enter a valid option...");
		}
		clrscr();
		printsqr(arr);
		printf("\nEnter an option...\nU/D/L/R or Q(quit)");
		scanf("%c",&ch);

	}
	return 0;
}

void printsqr(int a[4][4])
{
	int i,j;

	for(j=0;j<4;j++)
	{
		printf(" _____");
	}

	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			if(a[i][j] != 0)
			{
				printf("| %2d  ",a[i][j]);
			}
			else
			{
				printf("|     ");
			}
		}
		printf("|\n|");

		for(j=0;j<4;j++)
		{
			printf("_____|");
		}
	}
}

void swap(int* a,int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
