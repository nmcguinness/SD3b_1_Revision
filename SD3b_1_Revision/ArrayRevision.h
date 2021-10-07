#pragma once
#include <iostream>
using namespace std;

//add in some functions to remind us how to use arrays

void instantiateArray_Demo1()
{
	int ages[3];		//defining
	ages[0] = 18;
	ages[1] = 19;
	ages[2] = 20;

	cout << ages << endl;
	cout << ages[2] << endl;
}

void instantiateArray_Demo2()
{
	int ages[3] = { 21,22,23 }; //definining and initializing

	//ages.length //Eeeek! No length property in C++

	int length = sizeof(ages) / sizeof(ages[0]);

	for (int i = 0; i < length; i++)
		cout << ages[i] << endl;
}

void instantiateArray_Demo3()
{
	int* pIntArray = new int[4]; //pIntArray is a pointer to 1st address in array

	pIntArray[0] = 2020;
	pIntArray[1] = 2021;
	pIntArray[2] = 2022;
	pIntArray[3] = 2023;
}

int getSum(int* pArray, int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += pArray[i];
	}
	return sum;
}
