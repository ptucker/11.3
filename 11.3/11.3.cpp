#include "stdafx.h"
#include <iostream>
using namespace std;

int doubleCapacity(const int* list, int size)
{
	int *array = new int[size * 2];

	for (int i = 0; i < size; i++) {
		array[i] = list[i];
	}

	return *array;
}

int main()
{
	int array[5] = { 1,2,3,4,5 };

	int *ptr = NULL;

	* ptr = array[5];
	 doubleCapacity(ptr, 2);
    return 0;
}

