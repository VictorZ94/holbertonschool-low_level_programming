#ifndef SEARCHING_ALGORITHM_H
#define SEARCHING_ALGORITHM_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binarySearch(int arr[], int l, int r, int x);
int jump_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
