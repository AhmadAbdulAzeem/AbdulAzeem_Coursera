/**
 * @file stats.h 
 * @brief declaration of functions 
 *
 * @author Ahmed AbdulAzeem 
 * @date 6/11/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print statistics of an array including minimum, maximum, mean, median
 *
 *
 * @param arr an unsigned char pointer to an n-element data array
 * @param length an unsigned integer as the size of the array
 *
 * @return void
 */
void print_statistics(unsigned char *arr, unsigned int length);



/**
 * @brief Print array elements to screen
 *
 *
 * @param arr an unsigned char pointer to an n-element data array
 * @param length an unsigned integer as the size of the array
 *
 * @return void
 */
void print_array(unsigned char *arr, unsigned int length);



/**
 * @brief find the median of the array
 *
 *
 * @param arr an unsigned char pointer to an n-element data array
 * @param length an unsigned integer as the size of the array
 *
 * @return 8 bit median value
 */
unsigned int find_median(unsigned char *arr, unsigned int length);



/**
 * @brief find the mean of the input n-elements array
 *
 *
 * @param arr an unsigned char pointer to an n-element data array
 * @param length an unsigned integer as the size of the array
 *
 * @retur 32bit mean value
 */
unsigned int find_mean(unsigned char *arr, unsigned int length);



/**
 * @brief find the max of the input n-elements array
 * 
 *
 * @param arr an unsigned char pointer to an n-element data array
 * @param length an unsigned integer as the size of the array
 *
 * @return 8 bit max value
 */
unsigned char find_maximum(unsigned char *arr, unsigned int length);



/**
 * @brief find the min the input n-elements array
 * 
 *
 * @param arr an unsigned char pointer to an n-element data array
 * @param length an unsigned integer as the size of the array
 *
 * @return 8 bit min value
 */ 
unsigned char find_minimum(unsigned char *arr, unsigned int length);




/**
 * @brief sort array elements
 *
 *
 * @param arr an unsigned char pointer to an n-element data array
 * @param length an unsigned integer as the size of the array
 *
 * @return void
 */
void sort_array(unsigned char *arr, unsigned int length);


#endif /* __STATS_H__ */
