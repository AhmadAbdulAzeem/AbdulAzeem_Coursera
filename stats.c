/******************************************************************************
 * Copyright (C) 2020 by Ahmed AbdulAzeem 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Example c programming file
 *
 * A simple c-programming example that exhibits a handful of basic c-programming features to show how to calculate some statistics on a set of numbers:
 * 	-Mean
 * 	-Maximun
 * 	-Minumum
 * 	-Median
 *
 * @author Ahmed AbdulAzeem
 * @date 12/6/2020
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

  print_statistics(test, SIZE);

}



void print_statistics(unsigned char *arr, unsigned int length){
	unsigned char max, min;
	unsigned int mean, median;
	max = find_maximum(arr, length);
	min = find_minimum(arr, length);
	mean = find_mean(arr, length);
	sort_array(arr, length);
	median = find_median(arr, length);
	printf("Max = %d	Min = %d		Mean = %d	Median = %d	",max, min, mean, median);
}

void print_array(unsigned char *arr, unsigned int length){
	for(unsigned int i = 0;i < length;i++){
		printf("%d\n ",arr[i]);
	}
}

unsigned int find_median(unsigned char *arr, unsigned int length){
	unsigned int median = 0;

	// if number of elements are even
	if(length%2 == 0){
		median = (arr[(length-1)/2] + arr[(length/2)])/2;
	}
	// if number of elements is even
	else
		median = arr[length/2];

	return median;
}

unsigned int find_mean(unsigned char *arr, unsigned int length){
	unsigned int sum = 0,average = 0;

	for(unsigned char i = 0;i < length;i++){
		sum += arr[i];
	}

	average = sum / length;

	return average;
}

unsigned char find_maximum(unsigned char *arr, unsigned int length){
	unsigned char max = arr[0];

	for(unsigned char i = 1;i < length;i++){
		if(arr[i] > max)
			max = arr[i];
	}

	return max;
}

unsigned char find_minimum(unsigned char *arr, unsigned int length){
	unsigned char min = arr[0];

        for(unsigned char i = 1;i < length;i++){
                if(arr[i] < min)
                        min = arr[i];
        }

        return min;

}


void sort_array(unsigned char *arr, unsigned int length){
	unsigned char temp, i, j;
	for(i = 0;i < length;i++){
		for(j = i + 1;j < length;j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}



