﻿#include "stdafx.h"
#include <iostream>
using namespace std;

//PT -- 17/20

//PT -- doubleCapacity should return the pointer, not just a single integer
//    -3
// int* doubleCapacity(const int* list, int size)
int doubleCapacity(const int* list, int size)
{
	int *array = new int[size * 2];

	for (int i = 0; i < size; i++) {
		array[i] = list[i];
	}

	//PT -- This returns the first number in the array, and not the new array itself
	return *array;
}

int main()
{
	int array[5] = { 1,2,3,4,5 };

	int *ptr = NULL;

	//PT -- actually, you want ptr to point to the array, rather than the integer passed the end of the array
	//      ptr = array
	* ptr = array[5];
	//PT -- and here you want to get the new array returned from the function
	//      (why are you passing 2?)
	// int* newptr = doubleCapacity(ptr, 5);
	 doubleCapacity(ptr, 2);
	
	//PT -- finally, clean up the newly allocated array
	// delete[] newptr;
    return 0;
}

