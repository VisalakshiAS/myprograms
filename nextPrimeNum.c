#include<stdio.h>

int isPrime(int);

int main()
{
	int n; 
	printf("Enter n...");
	scanf("%d",&n);
	
	if(n%2 == 0)
	{
		n++;
	}
	
	while(1)
	{
		if(isPrime(n))
		{
			printf("\n%d",n);
			break;
		}
		
		if(n%10 == 3)
		{
			n += 4;
		}
		else if(n%2 != 0)
		{
			n += 2;
		}
	}
	return 0;
}

int isPrime(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
