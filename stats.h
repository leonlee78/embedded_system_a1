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
 * @brief Header file 
 *
 * <Add Extended Description Here>
 *
 * @author Leon Lee
 * @date 2/5/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

/**
 * @brief print the statistics of the given array in console
 *
 * @param arr pointer to array
 * @param a_size array size
 *
 * @return void
 */
void print_statistics(unsigned char* arr, unsigned int a_size);
/**
 * @brief print the elements in the array in console
 *
 * @param arr pointer to array
 * @param a_size array size
 *
 * @return void
 */
void print_array(unsigned char* arr, unsigned int a_size);
/**
 * @brief Find the median of the array
 *
 * @param arr pointer to array
 * @param a_size array size
 *
 * @return the median
 */
unsigned char find_median(unsigned char* arr, unsigned int a_size);
/**
 * @brief Find the mean of the array
 *
 * @param arr pointer to array
 * @param a_size array size
 *
 * @return the mean
 */
unsigned char find_mean(unsigned char* arr, unsigned int a_size);
/**
 * @brief Find the max of the array
 *
 * @param arr pointer to array
 * @param a_size array size
 *
 * @return the max
 */
unsigned char find_maximum(unsigned char* arr, unsigned int a_size);
/**
 * @brief Find the min of the array
 *
 * @param arr pointer to array
 * @param a_size array size
 *
 * @return the min
 */
unsigned char find_minimum(unsigned char* arr, unsigned int a_size);
/**
 * @brief swap two values
 *
 * @param xp pointer to first element
 * @param xy pointer to second element
 *
 * @return void
 */
void swap(unsigned char* xp, unsigned char* yp);
/**
 * @brief Sort the array in descending order
 *
 * @param arr pointer to array
 * @param a_size array size
 *
 * @return void
 */
void sort_array(unsigned char* arr, unsigned int a_size);

#endif /* __STATS_H__ */
