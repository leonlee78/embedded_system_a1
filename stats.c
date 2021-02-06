/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Leon Li
 * @date 2/5/2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_array(test, SIZE);
  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

void print_statistics(unsigned char* arr, unsigned int a_size)
{
  printf("The maximum of the array is %d\n", find_maximum(arr, a_size));
  printf("The minimum of the array is %d\n", find_minimum(arr, a_size));
  printf("The mean of the array is %d\n", find_mean(arr, a_size));
  printf("The median of the array is %d\n", find_median(arr, a_size));
}

void print_array(unsigned char* arr, unsigned int a_size)
{
  printf("Printing array:\n");
  for (unsigned int idx = 0; idx < a_size; idx++)
  {
    printf("%d ",arr[idx]);
  }
  printf("\nFinished!\n");
}

unsigned char find_median(unsigned char* arr, unsigned int a_size)
{
  sort_array(arr, a_size);
  if (a_size%2 == 0)
  {
    return (arr[a_size/2] + arr[a_size/2 + 1]) / 2;
  }
  else
  {
    return arr[a_size/2];
  }
}

unsigned char find_mean(unsigned char* arr, unsigned int a_size)
{
  unsigned int sum = 0;
  for (unsigned int idx = 0; idx < a_size; idx++)
  {
    sum += arr[idx];
  }
  unsigned char result = sum / a_size;
  return result;
}

unsigned char find_maximum(unsigned char* arr, unsigned int a_size)
{
  unsigned char result = 0;
  for (unsigned int idx = 0; idx < a_size; idx++)
  {
    if (arr[idx] > result)
    {
      result = arr[idx];
    }
  }
  return result;
}

unsigned char find_minimum(unsigned char* arr, unsigned int a_size)
{
  unsigned char result = 255;
  for (unsigned int idx = 0; idx < a_size; idx++)
  {
    if (arr[idx] < result)
    {
      result = arr[idx];
    }
  }
  return result;
}

void swap(unsigned char* xp, unsigned char* yp) 
{ 
    unsigned char temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

void sort_array(unsigned char* arr, unsigned int a_size)
{
  printf("Sorting Array\n");
  unsigned int i, j, max_idx; 

  // One by one move boundary of unsorted subarray 
  for (i = 0; i < a_size - 1; i++) { 

      // Find the maximum element in unsorted array 
      max_idx = i; 
      for (j = i + 1; j < a_size; j++) 
          if (arr[j] > arr[max_idx]) 
              max_idx = j; 

      // Swap the found maximum element 
      // with the first element 
      swap(&arr[max_idx], &arr[i]); 
  } 
}
/* Add other Implementation File Code Here */