#include <stdio.h>

#define SIZE    12


void rev(int arr[], int n) {


    int l = 0, r = n - 1;
    while (l < r) {


        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;


        l++;
        r--;
    }
}



int main() {
    int arr[SIZE] = {0};

       for(int i=0; i<SIZE; i++){
       scanf("%d", &arr[i]);
   }
    int n = sizeof(arr) / sizeof(arr[0]);


    rev(arr, n/3);

    for (int i = 0; i < n/3; i++)
        printf("%d ", arr[i]);


   rev(&arr[0]+n/3, n/3);
   for (int i = n/3; i < ((2*n)/3); i++)
        printf("%d ", arr[i]);

   rev(&arr[0]+((2*n)/3), n/3);
   for (int i = ((2*n)/3); i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
