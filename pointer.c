#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int arr1[10];
  srand(time(NULL));
  int iter = 0;
  while(iter < 9){
    array[iter] = (int)(rand());
    iter += 1;
  }
  arr1[9] = 0;

  iter = 0;
  int arr2[10];
  int *pointer;
  while(iter < 10){
    pointer = &array[iter];
    arr2[9 - iter] = *pointer;
    iter += 1;
  }
  iter = 0;
  printf("First Array:\n");
  for(iter = 0; iter < 10; iter ++){
    printf("arr1[%d] is %d\n", iter, arr1[iter]);
  }
  iter = 0;
  printf("First Array Reversed:\n",);
  for(iter = 0; iter < 10; iter ++){
    printf("arr2[%d] is %d\n", iter, arr2[iter]);
  }
}
