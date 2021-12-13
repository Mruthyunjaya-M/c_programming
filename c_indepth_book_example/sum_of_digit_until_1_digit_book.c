/*********************************************
P5.26 Program to find out the sum of digit of
a number ubntil the sum is reduced to 1 digit.
For example
538769 -->> 38 -->> 11 -->> 2
789988 -->> 49 -->> 13
*********************************************/
#include<stdio.h>
int main()
{
    long num;
    int dig,sum;
    printf("Enter the Number to find sum of digit until last digit\n");
    scanf("%d", &num );
    do
    {
	sum=0;
	while(num!=0)
	{
	    dig=num%10;
	    sum+=dig;
	    num/=10;
	}
	printf("Sum %d\n", sum );
	num=sum;
    }while(num/10!=0);
}
