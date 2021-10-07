// SD3b_1_Revision.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Functions.h"
#include "ArrayRevision.h"

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
}