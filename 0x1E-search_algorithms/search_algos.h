#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_help(int *array, int start, int end, int value);
int jump_search(int *array, size_t size, int value);
int jump_steps(int *array, int start, int end, int value);
#endif
