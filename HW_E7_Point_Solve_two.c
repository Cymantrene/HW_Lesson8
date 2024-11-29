#include <stdio.h>



void rev(int arr[], int n) {
    int temp[n];


    for (int i = 0; i < n; i++) {
        temp[i] = arr[n - 1 - i];
    }


    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
        printf("%d ", arr[i]);
    }
}

void halves(int* arr,  int siz)
{
    siz = siz/2;
    int* half = arr + siz;

    rev(arr, siz);
    rev(half, siz);

}

int main() {
    int arr[10] = {0};
   for(int i=0; i<10; i++){
       scanf("%d", &arr[i]);
   }
    int n = sizeof(arr) / sizeof(arr[0]);

     halves(arr, n);

    return 0;
}
