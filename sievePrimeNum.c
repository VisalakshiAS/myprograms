#include<stdio.h>

int checkPrime(long int n);

int main()
{
	long int n,r,temp;
	printf("Enter n...");
	scanf("%ld",&n);
	
	r = n/6;
	temp = (r+1)*6;
	//printf("%d",r);
	if((n%6 == 0) && (checkPrime(n+1)))
	{
		printf("%ld",n+1);
	}
	else
	{
		while(1)
		{
			if(checkPrime(temp-1))
			{	
				printf("%ld",temp-1);
				break;
			}
			else if(checkPrime(temp+1))
			{
				printf("%ld",temp+1);
				break;
			}
			else
			{
				temp = temp + 6;
			}
		}
	}	
}

int checkPrime(long int n)
{
	int d = 6;
	if( (n%2 == 0) || (n%3 == 0) )
	{
		return 0;
	}
	while(1)
	{
		if( n%(d-1) == 0)
		{
			return 0;
		}
		if( n%(d+1) == 0)
		{
			return 0;
		}
		d = d + 6;
		if( d>n/2 )
		{
			break;
		}
	}
	return 1;
}
