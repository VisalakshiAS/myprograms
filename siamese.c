#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n,count=1;
	int mat[9][9]={0};

	clrscr();
	printf("Enter the order of matrix...");
	scanf("%d",&n);
	i=0;j=n/2;
	mat[i][j]=count++;
	while(count<=n*n)
	{
		if(i==0)
		{
			i=n-1;
		}
		else
		{
			i--;
		}
		if(j==n-1)
		{
			j=0;
		}
		else
		{
			j++;
		}
		if(mat[i][j]==0)
		{
			mat[i][j]=count;
		}
		else
		{
			if(i==n-1)
			{
				i=1;
			}
			else
			{
				i=i+2;
			}
			if(j==0)
			{
				j=n-1;
			}
			else
			{
				j=j-1;
			}
			mat[i][j]=count;
		}
		count++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n\n");
	}
	getch();
	return 0;
}
