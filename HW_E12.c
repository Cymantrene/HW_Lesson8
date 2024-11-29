#include <stdio.h>
#include <stdlib.h>

#define SIZE(a) ( sizeof(a) / sizeof(*a) )
#define NUM 10

int up(const void * a, const void * b)
{
    return *(int*)a - *(int*)b;
}
int down(const void * a, const void * b )
{
return *(int*)b - *(int*)a;
}

void print_sort(int * arr, size_t size){
    while ( size-- )
        printf("%d ", *arr++ );
        printf("\n");
}

int main(void){
    int arr[NUM] = { 0 };
   for(int i=0; i<NUM; i++){
       scanf("%d", &arr[i]);
   }


    qsort(arr, SIZE(arr) / 2, sizeof(int), up);
    qsort(arr + SIZE(arr) / 2, SIZE(arr) / 2, sizeof(int), down);


    print_sort(arr, SIZE(arr));

    return 0;
}
