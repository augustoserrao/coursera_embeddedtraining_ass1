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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() 
{
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  printf("Hello World!\n");

  printf("Array elements: \n");
  if (print_array(test, SIZE))
    return;
 
  printf("\n\nStatistics: \n");
  if (print_statistics(test, SIZE))
    return;
  
  printf("\n\nTest succesfully done\n\n");
}

/* Add other Implementation File Code Here */

unsigned char print_statistics(unsigned char *array, unsigned int size)
{
  if (!array)
    return 1;

  printf("\nMaximum: %d", find_maximum(array, size));
  printf("\nMinumum: %d", find_minimum(array, size));
  printf("\nMean:    %f", find_mean(array, size));
  printf("\nMedian:  %f", find_median(array, size));

  return 0;
}

unsigned char print_array(unsigned char *array, unsigned int size)
{
  int idx;

  if (!array)
    return 1;
  
  printf("\n");  

  for (idx = 0; idx < size; idx++)
  {
    printf("%d ", array[idx]);
  }

  return 0;
}

double find_median(unsigned char *array, unsigned int size)
{
  double median;

  if (sort_array(array, size))
    return 0;

  if (print_array(array, size))
    return 0;

  if (size % 2 == 0)
  {
    median = (array[size / 2] + array[(size / 2) - 1]) / 2;
  }
  else
  {
    median = array[(size - 1) / 2];
  }

  return median;
}

double find_mean(unsigned char *array, unsigned int size)
{
  unsigned int idx;
  unsigned int sum = 0;

  for (idx = 0; idx < size; idx++)
  {
    sum += array[idx];
  }

  return (double) sum / size;
}

unsigned char find_maximum(unsigned char *array, unsigned int size)
{
  unsigned int idx;
  unsigned char max = 0;

  for (idx = 0; idx < size; idx++)
  {
    if (array[idx] > max)
      max = array[idx];
  }

  return max;
}

unsigned char find_minimum(unsigned char *array, unsigned int size)
{
  unsigned int idx;
  unsigned char min = 255;

  for (idx = 0; idx < size; idx++)
  {
    if (array[idx] < min)
      min = array[idx];
  }

  return min;
}

unsigned char sort_array(unsigned char *array, unsigned int size)
{
  unsigned char tempvar;
  unsigned int idx;
  unsigned int idxback; 

  if (!array)
    return 1;

  for (idx = 1; idx < size; idx++)
  {
    for (idxback = idx; idxback >= 1; idxback--)
    {
      if (array[idxback] > array[idxback - 1])
      {
        tempvar = array[idxback];
        array[idxback] = array[idxback - 1];
        array[idxback - 1] = tempvar; 
      }
    }
  }
 
  return 0;
}
