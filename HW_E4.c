#include <stdio.h>

void sum_twomax(int *arr, int n, int *max1, int *max2)
{
     int i,flg;
     flg=0;
     *max1=arr[0];
     for (i=1; i<n; i++)
       if (arr[i] > *max1)
       {
           *max2=*max1;
           *max1=arr[i];
           flg=-1;
       }
       else
          if (flg==0)
          {
             *max2=arr[i];
             flg=-1;
          }
          else
            if (arr[i]>*max2) *max2=arr[i];


}

int main(int argc, char *argv[])
{
    int arr[10]={0};
    int max1,max2;
    for(int i=0; i<10; i++)
    {
       scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sum_twomax(arr,n,&max1,&max2);

     printf("%d  \n",max1+max2);

}
