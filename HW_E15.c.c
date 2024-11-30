#include <stdio.h>
#define SIZE 10

int main (){
    int i, A[SIZE], plus[SIZE], minus[SIZE], countPlus = 0, countMinus = 0;
    for (i=0; i<SIZE; i++){
        scanf("%d", &A[i]);
        if (A[i]>0) plus[countPlus++]=A[i];
        if (A[i]<0) minus[countMinus++]=A[i];
    }

    for (i=0; i < countPlus; i++)
        printf ("%d ", plus[i]);

    for (i=0; i < countMinus; i++)
        printf ("%d ", minus[i]);
}
