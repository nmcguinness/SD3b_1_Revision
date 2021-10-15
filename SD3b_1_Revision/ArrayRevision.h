#pragma once
#include <iostream>
using namespace std;

//add in some functions to remind us how to use arrays

void demoArrayInstantiation1()
{
	int ages[3];		//defining
	ages[0] = 18;
	ages[1] = 19;
	ages[2] = 20;

	cout << ages << endl;
	cout << ages[2] << endl;
}

void demoArrayInstantiation2()
{
	int ages[3] = { 21,22,23 }; //definining and initializing

	//ages.length //Eeeek! No length property in C++

	int length = sizeof(ages) / sizeof(ages[0]); //12 / 4 = 3

	for (int i = 0; i < length; i++)
		cout << ages[i] << endl;
}

void demoArrayInstantiationPounter()
{
	int* pIntArray = new int[4]; //pIntArray is a pointer to 1st address in array

	pIntArray[0] = 2020;
	pIntArray[1] = 2021;
	pIntArray[2] = 2022;
	pIntArray[3] = 2023;

	delete[] pIntArray;
}

/// @brief Exercise 1 - Solution - Get sum of array of ints
/// @param pArray Address of first element
/// @param length Total number of elements
/// @return Integer sum
int getSum(int* pArray, int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += pArray[i];
	}
	return sum;
}

/// @brief Swaps a COPY of the values stored (addresses) in two pointers to integers
/// @param pA Address of first int
/// @param pB Address of second int
void swap_not_working(int* pA, int* pB) { //a swap with this method signature passes pointer by value (copy) only
	int* pTemp = pB;
	pB = pA;
	pA = pTemp;
}

/// @brief Swaps values stored (addresses) in two pointers to integers
/// @param pA Address of first int
/// @param pB Address of second int
void swap(int*& pA, int*& pB) { //a swap with this method signature passed a reference to the pointer
	int* pTemp = pB;
	pB = pA;
	pA = pTemp;
}

//note we would also have to write many overloaded flavours. Is this right? Template/generic?
void swap(float*& pA, float*& pB) {
	float* pTemp = pB;
	pB = pA;
	pA = pTemp;
}

//double getMax(const double*& pArray, int length) {
//
//	if (length == 0)
//		return 0;
//
//	double max = -1;
//
//	for (int i = 0; i < length; i++) {
//		if (max < pArray[i]) {
//			max = pArray[i];
//		}
//	}
//
//	return max;
//}

double* getMax(double*& pArray, int length) {
	if (length == 0)
		return nullptr;

	double max = -1;
	double* pMax = &max;

	for (int i = 0; i < length; i++) {
		if (*pMax < pArray[i]) {
			pMax = pArray + i; //pArray + i => base address + i * sizeof(double)
		}
	}

	return pMax;
}
