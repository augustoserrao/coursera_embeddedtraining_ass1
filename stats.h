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
 * @file stats.h 
 * @brief Definition of global function of stats.c
 *
 *
 * @author Augusto Serrao
 * @date 08/28/2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints minimum, maximum, mean, and median values of the array
 *
 *i@param array - Pointer to the array of unsigned char elements
 * @param size - Number of elements in the array
 *
 * @return unsigned char result of the function
 */
unsigned char print_statistics(unsigned char *array, unsigned int size);

/**
 * @brief Prints the elements of the array
 *
 * @param array - Pointer to the array of unsigned char elements
 * @param size - Number of elements in the array
 *
 * @return unsigned char result of the function
 */
unsigned char print_array(unsigned char *array, unsigned int size);

/**
 * @brief Calculates the median of elements in the array 
 *
 * @param array - Pointer to the array of unsigned char elements
 * @param size - Number of elements in the array
 *
 * @return unsigned float median value
 */
double find_median(unsigned char *array, unsigned int size);

/**
 * @brief Calculates the mean of elements in the array 
 *
 * @param array - Pointer to the array of unsigned char elements
 * @param size - Number of elements in the array
 *
 * @return unsigned float mean value
 */
double find_mean(unsigned char *array, unsigned int size);

/**
 * @brief Finds the maximum element of the array 
 *
 * @param array - Pointer to the array of unsigned char elements
 * @param size - Number of elements in the array
 *
 * @return unsigned char maximum value
 */
unsigned char find_maximum(unsigned char *array, unsigned int size);

/**
 * @brief Finds the minimum element of the array 
 *
 * @param array - Pointer to the array of unsigned char elements
 * @param size - Number of elements in the array
 *
 * @return unsigned char minimum value
 */
unsigned char find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief Sorts the array from the largest to the smallest 
 *
 * @param array - Pointer to the array of unsigned char elements
 * @param size - Number of elements in the array
 *
 * @return unsigned char result of the function
 */
unsigned char sort_array(unsigned char *array, unsigned int size);



#endif /* __STATS_H__ */
