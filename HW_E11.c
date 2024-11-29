#include <stdio.h>

#define SIZE 10

void swap (int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int main ()
{

  int arr[SIZE] = { 0 };
  for (int i = 0; i < SIZE; i++)
    {
      scanf ("%d", &arr[i]);
    }
  for (int i = 0; i < SIZE; i++)
    {
      for (int j = SIZE - 1; j > i; j--)
        {
          if (arr[j] % 10 < arr[j - 1] % 10)
            {
              swap ((arr + (j - 1)), arr + j);
            }
        }
    }

  for (int i = 0; i < SIZE; i++)
    {
      printf ("%d ", arr[i]);
    }

  return 0;
}
