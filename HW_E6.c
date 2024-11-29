#include <stdio.h>
#define SIZE 12
int main()
{
   int array[SIZE]={0};
   int i;
    float aver, sum=0.00;
   for(i=0; i<SIZE; i++){
       scanf("%d", &array[i]);
   }



   for(i=0; i<SIZE; i++)
    {
           sum += array[i];
           aver = (float)sum/SIZE;

   }

   printf("%.2f  ", aver);

   return 0;
}
