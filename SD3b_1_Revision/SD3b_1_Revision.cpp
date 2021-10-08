// SD3b_1_Revision.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <limits>
#include "Functions.h"
#include "ArrayRevision.h"
#include "RecursionRevision.h"

//int add(int x, int y); //declaration

int main()
{
	//test add
	std::cout << "Add: " << add(3, 2) << std::endl;

	//test swap vers. 1
	int a = 10, b = 50;
	swap(a, b);
	std::cout << a << ", " << b << std::endl;
	std::cout << "Remember an int is a value-type so we pass-by-copy" << std::endl;
	std::cout << "What are the other value-types?" << std::endl;

	std::cout << std::endl;

	//test swap vers. 2
	int c = 10, d = 50;
	swap_ref(c, d);
	std::cout << c << ", " << d << std::endl;
	std::cout << "Remember when we use & we pass an address of the variable, just like pass-by-reference" << std::endl;

	//test swap vers. 3
	int e = 200;
	int f = 500;
	int* pE = &e;
	int* pF = &f;
	swap_ptr(pE, pF);
	std::cout << *pE << ", " << *pF << std::endl;
	std::cout << "Remember when we use & we pass an address of the variable, just like pass-by-reference" << std::endl;

	//test initializing pointer with address of an int and showing address
	int test = 34;
	int* pTest = &test;
	std::cout << "Address of pTest: " << pTest << std::endl;

	/************************** Using Arrays ******************************/

	cout << endl;

	//demo showing how to instantiate and access
	cout << "instantiateArray_Demo1" << endl;
	instantiateArray_Demo1();

	//demo showing how to instantiate and iterate
	cout << "instantiateArray_Demo2" << endl;
	instantiateArray_Demo2();

	/************************** Revision - Pointers & Dynamic Memory - Exercise 1 ******************************/
	cout << endl;

	//demo getSum
	int* pGrades = new int[3]; //pIntArray is a pointer to 1st address in array
	pGrades[0] = 99;
	pGrades[1] = 40;
	pGrades[2] = 65;

	int length = 3; // sizeof(*pGrades) / sizeof(pGrades[0]);
	int sum = getSum(pGrades, length);
	cout << "Sum of all values is " << sum << endl;

	//Do NOT forget to de-allocate the space we created for the array - Memory leak!!!
	delete[] pGrades;

	/************************** Revision - Pointers & Dynamic Memory - Exercise 2 ******************************/
	cout << endl;

	int x = 60;
	int y = 100;

	int* pX = &x; //remember a pointer stores address so use & to get variable address
	int* pY = &y;

	cout << "(pre-swap) pX address:" << pX << endl;
	cout << "(pre-swap) pY address:" << pY << endl;

	//try using the function that passes pointers by COPY - does it work?
	//swap_not_working(pX, pY);

	swap(pX, pY);
	cout << "(post-swap) pX address:" << pX << endl;
	cout << "(post-swap) pY address:" << pY << endl;

	cout << "pX stores:" << *pX << endl; //using * we are going to the address pointed to by pX
	cout << "pY stores:" << *pY << endl;

	/************************** Revision - Pointers & Dynamic Memory - Exercise 5 ******************************/
	cout << endl;

	double* pChocolateConsumption = new double[5];
	pChocolateConsumption[0] = 1.5;
	pChocolateConsumption[1] = 1.75;
	pChocolateConsumption[2] = 5.61;
	pChocolateConsumption[3] = 3.45;
	pChocolateConsumption[4] = 1.00092;

	double* pMax = getMax(pChocolateConsumption, 5);
	cout << "Max chocolate consumption for all participants: " << *pMax << endl;
	delete[] pChocolateConsumption;

	/************************** Revision - Recursion - Exercise 2 ******************************/
	cout << endl;

	int goalsArray[] = { 5, 0, 7, 1, 4, 8, 100000 };
	int min = INT_MAX;  //100000
	int max = INT_MIN;  //-1

	getMinMax(nullptr, 7, 0, min, max);

	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	/************************** Revision - Recursion - Exercise 5 ******************************/
	cout << endl;

	//to do...
}