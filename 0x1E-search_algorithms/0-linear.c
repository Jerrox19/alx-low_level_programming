#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - the implementation of linear search algo
 * @*array - the pointer to the first element
 * @size -  the number of elements in array
 * @value -  teh value being searched
 *
 * Return: The first index of value or -1
 * */

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}
