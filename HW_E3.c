#include <stdio.h>
#define SIZE 10
int main()
{
   int array[SIZE]={0};
   int i, max, min,  pos_max=1, pos_min=1;

   for(i=0; i<SIZE; i++){
       scanf("%d", &array[i]);
   }

   max = array[0];
   min = array[0];

   for(i=0; i<SIZE; i++)
    {

       if(array[i] > max)
       {
           max = array[i];
           pos_max = i + 1;
       }

       if(array[i] < min)
       {
           min = array[i];
           pos_min = i + 1;
       }
   }

   printf("%d %d ", pos_max, max);
   printf("%d %d ", pos_min, min);
   return 0;
}
