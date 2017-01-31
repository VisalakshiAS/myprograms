#include<stdio.h>

int main()
{
    long int no,temp,res=0;
    int min=1;

    printf("Enter number : ");
    scanf("%ld",&no);

    while(min<=9)
    {
	      temp = no;
	      while(temp != 0)
      	{
	         if(temp%10 == min)
	         {
		           res = res * 10 + min;
	         }
	         temp = temp / 10;
	      }
	      min++;
    }
    printf("Number : %ld",res);
    return 0;
}
