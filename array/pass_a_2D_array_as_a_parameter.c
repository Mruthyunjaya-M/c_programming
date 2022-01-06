#include <stdio.h>
const int M = 3;
const int N = 3;
 
void print(int arr[M][N])
{
    int i, j;
    printf("arr[i][j] = %d \n", sizeof(arr[i][j]) );
    printf("arr[i]    = %d \n", sizeof(arr[i]) );
    printf("arr       = %d \n", sizeof(arr) );
    for (i = 0; i < M; i++)
    {
      for (j = 0; j < N; j++)
      {
          printf("%d ", arr[i][j]);
      }
      printf("\n");
    }
}
 
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(arr);
    return 0;
}
