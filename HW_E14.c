#include<stdio.h>
#define SIZE 10


int main()
{
    int numbers[10] = {0};
       for(int i=0; i<SIZE; i++)
    {
       scanf("%d", &numbers[i]);
    }
    int arr2[SIZE], k = 0, k1 = 0;
    int flag = 0;
    for(int i = 0; i < SIZE; i++)
    {
       for(int j = 0; j < SIZE; j++)
       {
           flag = 0;
           if(i != j && numbers[i] == numbers[j])
           {
               for(k1 = 0; k1 < k; k1++)
                   if(arr2[k1] == numbers[j])
                     flag = 1;
               if(flag != 1)
                   arr2[k++] = numbers[j];
           }
       }
    }
    for(int i = 0; i < k; i++)
      printf("%d ",arr2[i]);
    return 0;
}
