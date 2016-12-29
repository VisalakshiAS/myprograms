#include<stdio.h>

int main()
{
    int no,temp,rev=0;

    printf("Enter Number: ");
    scanf("%d",&no);
    temp = no;
    while(temp != 0)
    {
	      rev = rev * 10 + (temp % 10);
	      temp = temp / 10;
    }
    if(no == rev)
    {
	      printf("\nYES");
    }
    else
    {
	      printf("\nNO");
    }
    return 0;
}
