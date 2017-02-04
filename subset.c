#include<stdio.h>

void subset(int a[],int,int);

int main()
{
	int a[10],n,i,k,t;
	
	printf("Enter n...");
	scanf("%d",&n);
	
	printf("Enter the set...");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	t=n;
	for(k=1;k<=n;k++)
	{
		for(i=0;i<t;i++)
		{
			subset(a,i,k);
		}
		t--;
	}
}

void subset(int a[],int i,int k)
{
	if(k == 1)
	{
		printf("%d,\n",a[i]);
	}
	else
	{
		printf("%d,",a[i]);
		subset(a,i+1,k-1);
	}
}
