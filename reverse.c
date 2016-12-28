#include<stdio.h>

int main()
{
    int no,rev=0;

    printf("Enter no:");
    scanf("%d",&no);

    while(no!=0)
    {
		rev = rev * 10 + no % 10;
		no = no / 10;
    }

    printf("Reverse Number: %d",count,rev);
    return 0;
}
