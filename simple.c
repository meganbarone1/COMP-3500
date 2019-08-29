#include<stdio.h>
#include<math.h>

/** simple.c is a C program that calculates average of square roots
 *  of an array of 10 integers, 1-10. 
 */
void main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
 double sum = 0;
  
  //Calculates sum of square roots of 1-10 in arr
  for (int i = 0; i < 10; i++) {
    double sqRoot = sqrt(arr[i]);
    sum += sqRoot;
  }
  char output[10];
  snprintf(output, 10, "%lf", sum);
  printf("%s", output);


}
