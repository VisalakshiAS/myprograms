#include<stdio.h>

int main()
{
	int mat[5][5],m,n,i,j,k;
	printf("Enter index of matrix m,n and k value...");
	scanf("%d %d %d",&m,&n,&k);

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j == k)
			{
				mat[i][j] = 1;
			}
			else
			{
				mat[i][j] = 0;
			}
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}
