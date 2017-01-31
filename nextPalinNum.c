#include<stdio.h>
#include<math.h>

int rev(int n);

int main()
{
	int n,temp,t1,t2,l=0,l1;
	printf("Enter n...");
	scanf("%d",&n);
	
	temp = n;
	while(temp != 0)
	{
		l++;
		temp /= 10;
	}
	
	l1 = l / 2;
	temp = n;
	while(l1--)
	{
		temp /= 10;
	}
	
	if(l%2 == 0)
	{
		t1 = rev(temp);
		t2 = temp * pow(10,l/2) + t1;
		
		if(t2 < n)
		{
			temp++;
			t1 = rev(temp);
			t2 = temp * pow(10,l/2) +t1;
		}
	}
	else
	{
		t1 = rev(temp/10);
		t2 = temp * pow(10,l/2) + t1;
		
		if(t2 < n)
		{
			temp++;
			t2 = temp * pow(10,l/2) + t1;
		}
	}
	printf("\n%d",t2);
	return 0;
}

int rev(int n)
{
	int rev=0;
	while(n != 0)
	{
		rev = rev * 10 + n % 10;
		n = n / 10;
	}
	return rev;
}
