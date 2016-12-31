#include<stdio.h>

int search(int*,int,int);

int main()
{
	int arr[15],i,k,n;
	
	printf("Enter number of elements...");
	scanf("%d",&n);
	printf("Enter array elements...");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter search key...");
	scanf("%d",&k);
	
	printf("%d\n",search(arr,n,k));
	
}

int search(int *a,int n,int k)
{
	int i,count=0;
	
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			break;
		}
	}
	
	while(a[i] == k)
	{
		count++;i++;
	}
	return count;
}
