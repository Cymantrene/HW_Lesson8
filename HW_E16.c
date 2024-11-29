#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int up(const void * a, const void * b)
{
    return *(int*)a - *(int*)b;
}
int mostFreq(int arr[], int n)
{

    qsort(arr, n, sizeof(int), up);


    int max_count = 1, res = arr[0], curr_count = 1;
     for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else
            curr_count = 1;

        if (curr_count > max_count) {
            max_count = curr_count;
            res = arr[i - 1];
        }
    }

    return res;
}


int main()
{
    int arr[SIZE] = { 0};
    for (int i = 0; i < SIZE; i++)
	scanf("%d", &arr[i]);
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d ", mostFreq(arr, n));
    return 0;
}
