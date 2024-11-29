#include <stdio.h>
#define SIZE  12
#define SHIFT 4
void rev(int * a, int i, int j)
{
    while(i < j)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }
}

int main()
{
   int arr[SIZE]={0};
   for(int i=0; i<SIZE; i++)
    {
       scanf("%d", &arr[i]);
    }

    rev(arr, 0,     SIZE  - 1);
    rev(arr, 0,     SHIFT - 1);
    rev(arr, SHIFT, SIZE  - 1);

    for (int i = 0; i < SIZE; ++i)
        printf("%d ", arr[i]);
}


