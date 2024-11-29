#include <stdio.h>


void ShiftRight (int array[], int size)
{
  int temp = array[--size];
  while (size > 0)
    array[size--] = array[size - 1];
  array[0] = temp;
  for (int i = 0; i < 10; i++)
    {
      printf ("%d ", array[i]);
    }
}


int main ()
{
  int arr[10] = { 0 };
  for (int i = 0; i < 10; i++)
    {
      scanf ("%d", &arr[i]);
    }
  int n = sizeof (arr) / sizeof (arr[0]);

  ShiftRight (arr, n);

  return 0;
}
