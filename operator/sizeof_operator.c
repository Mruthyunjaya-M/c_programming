#include<stdio.h>
void checking_sizeof_operator_using_array(int aiArray[], int acArray[]);
void checking_sizeof_operator_using_void(void *aiArray, void *acArray);
int main()
{
    int aiArray[10] = {0};
    char acArray[10] = {0};
    printf("size of aiArray = %zu\n", sizeof(aiArray) );
    printf("size of acArray = %zu\n", sizeof(acArray) );
    checking_sizeof_operator_using_array(aiArray, acArray);
    checking_sizeof_operator_using_void(aiArray, acArray);
}

void checking_sizeof_operator_using_array(int aiArray[], int acArray[])
{
    printf("size of aiArray = %zu\n", sizeof(aiArray) );
    printf("size of acArray = %zu\n", sizeof(acArray) );
}

void checking_sizeof_operator_using_void(void *aiArray, void *acArray)
{
    printf("size of aiArray = %zu\n", sizeof(aiArray) );
    printf("size of acArray = %zu\n", sizeof(acArray) );
}

