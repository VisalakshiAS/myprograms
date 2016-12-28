#include<stdio.h>

int main()
{
    int no,count=0,sum=0;

    printf("Enter no: ");
    scanf("%d",&no);

    while(no!=0)
    {
		sum = sum + no % 10;
		no = no / 10;
		count++;
    }

    printf("Sum of digits : %d\nNo. of digits : %d",sum,count);
    return 0;
}
