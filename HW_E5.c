#include <stdio.h>
#define SIZE 10
int main()
{
   int array[SIZE]={0};
   int i, sum=0;

   for(i=0; i<SIZE; i++){
       scanf("%d", &array[i]);
   }



   for(i=0; i<SIZE; i++)
    {

       if(array[i] > 0)
       {
           sum += array[i];

       }


   }

   printf("%d ", sum);

   return 0;
}
