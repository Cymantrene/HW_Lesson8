#include <stdio.h>

#define SIZE 10
int max, min;

void findMaxMin(int arr[], int n, int *max, int *min)
{
    *min = arr[0];
    *max = arr[0];
    int pos_min=1, pos_max=1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > *max)
            {
                *max = arr[i];
                pos_max = (i+1);
            }
        if (arr[i] < *min)
            {
                *min = arr[i];
                pos_min = (i+1);
            }
    }
     printf("%d %d %d %d \n",pos_max, *max, pos_min, *min);

}


int main()
{

    int arr[SIZE]={0};
    for(int i=0; i<SIZE; i++)
    {
       scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    findMaxMin(arr, n, &max, &min);


    return 0;
}
