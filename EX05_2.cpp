﻿// EX05_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// 18/20

template <typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		T currentMin = list[i];
		int currentMinIndex = i;

		for (int j = i + 1; j < size; j++)
		{
			if (currentMin > list[j])
				return false;
			//PT -- don't return true until you know the whole array is sorted.
			// -2
			else
				return true;
		}
	}
	//PT -- you could do this without the nest loop, but just comparing adjacent items
	/*
	for (int i=0; i<size-1; i++) {
		if (list[i] > list[i+1]
			return false;
	}
	return true;
	*/
}

int main()
{
	int list1[3] = { 1, 2, 3 };
	double list2[3] = { 1.1, 2.2, 3.3 };
	string list3[3] = { "joe", "abby", "sam" };

	cout << isSorted(list1, 3) << endl;
	cout << isSorted(list2, 3) << endl;
	cout << isSorted(list3, 3) << endl;


    return 0;
}

