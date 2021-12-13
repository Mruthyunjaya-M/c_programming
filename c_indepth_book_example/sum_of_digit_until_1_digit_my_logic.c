/*********************************************
P5.26 Program to find out the sum of digit of
a number ubntil the sum is reduced to 1 digit.
For example
538769 -->> 38 -->> 11 -->> 2
789988 -->> 49 -->> 13
*********************************************/
#include<stdio.h>
#include<stdbool.h>
int main()
{
	int i32Number=0, i32TempNumber=0, i32SumOfNumber=0 ;
	printf("Enter the Number to find sum of digit until last digit : ");
	scanf("%d", &i32Number );
	while( true )
	{

		i32TempNumber=i32Number%10;
		i32SumOfNumber+=i32TempNumber;
		if( i32Number < 10 )
		{
			i32Number = i32SumOfNumber;
			i32SumOfNumber = 0;
			printf("i32TempNumber = %d\n", i32Number );
			if(i32Number<10)
			{
				break;
			}
		}
		if(i32SumOfNumber || !i32TempNumber )
		{
			i32Number/=10;
		}
	}
}
