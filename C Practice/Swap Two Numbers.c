/*Madhav Shekhar Bhawsar, 26070122264, CSE-C2, Experiment*/

#include <stdio.h>

void swap(int *x, int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
  
}

int main(){
  int a = 10, b = 20;
  printf("Before swapping: a = %d, b = %d\n", a, b);
  swap(&a,&b);
  printf("After swapping: a = %d, b = %d\n", a, b);
  return 0;
  
}
