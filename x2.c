#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int *arr = (int*) malloc((argc-1) * sizeof(int));
  int sum = 0;
  for(int i = 0; i < argc-1; i++)
  {
    arr[i] = atoi(*(argv+i+1));
    if(arr[i] % 2)
    {
      printf("%d ", arr[i]);
      sum += arr[i];
    }
  }

    
  printf("\nsum = %d\n", sum);
}
