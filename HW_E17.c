#include <stdio.h>

#define SIZE    10
#define TRUE    1
#define FALSE   0

int main()
{

        int arr[SIZE], res[SIZE];
       for (int i=0; i<SIZE; i++)
        {
            scanf("%d", &arr[i]);
        }

    int length_res = 0;

    for (int i = 0; i < SIZE; i++)
    {

        int temp = TRUE;
        for (int j = 0; j < SIZE; j++)
        {
            if (arr[j] == arr[i] && j != i)
            {
                temp = FALSE;
                break;
            }
        }

        if (temp)
        {
            res[length_res] = arr[i];
            ++length_res;
        }
    }


    for (int i = 0; i < length_res; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}
