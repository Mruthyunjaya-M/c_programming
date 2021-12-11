#include<stdio.h>
int main()
{
    int a=7,b=8,c=9,sum=0;
    sum=a=8,b=7,c=6;
    printf("Sum Without round bracket = %d\n", sum);
    sum=(a=8,b=7,c=6);
    printf("Sum Using round bracket   = %d\n", sum);
}
#if 0
OUTPUT of program
Sum Without round bracket = 8
Sum Using round bracket   = 6
#endif
