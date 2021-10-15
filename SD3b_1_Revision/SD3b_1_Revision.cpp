// SD3b_1_Revision.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <limits>
#include "Functions.h"
#include "ArrayRevision.h"
#include "RecursionRevision.h"
#include "Flower.h"

//declarations
void demoSwap();
void classesQuestion2();

int main()
{
	classesQuestion2();

	/************************** Pass-by-copy and by-reference ******************************/
	demoSwap();

	/************************** Using Arrays ******************************/

	cout << endl;

	//demo showing how to instantiate and access
	cout << "demoArrayInstantiation1" << endl;
	demoArrayInstantiation1();

	//demo showing how to instantiate and iterate
	cout << "demoArrayInstantiation2" << endl;
	demoArrayInstantiation2();

	//demo showing how to instantiate using pointer
	cout << "demoArrayInstantiationPounter" << endl;
	demoArrayInstantiationPounter();
}

/************************** Revision - Pass-by-copy, Pass-by-reference & Arrays ******************************/

void demoSwap() {
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
}

/************************** Revision - Recursion ******************************/

void recursionQuestion1()
{
	cout << endl;
	string input;
	do
	{
		cout << "Please enter a word, exit to quit.";
		cin >> input;
		if (input != "exit")
		{
			string msg = isPalindrome(input) ? input + " is a palindrome" : input + " is NOT a palindrome";
			cout << msg << endl;
		}
	} while (input != "exit");
}

void recursionQuestion2()
{
	cout << endl;
	int arr[] = { 1,2,3,4,-5,6,7,8,9,10 };
	int min, max;
	min = arr[0];
	max = arr[0];
	getMinMax(arr, 10, 0, min, max);
	cout << "The minimum value is " << min << endl;
	cout << "The maximum value is " << max << endl;
}

void recursionQuestion3()
{
	cout << endl;
	string s;
	cout << "Please enter a string " << endl;
	getline(cin, s);
	cout << s << " Reversed is " << reverse(s) << endl;
}
void recursionQuestion4()
{
	cout << endl;
	string s;
	cout << "Please enter a number " << endl;
	getline(cin, s);
	cout << s << " as int is " << getNumber(s) << endl;
}

void recursionQuestion5()
{
	int i;
	cout << "Which value would you like to find 2 to the power of? ";
	cin >> i;
	cout << "2 to the power of " << i << " is " << power(i) << endl;
}

/************************** Revision - Classes & Operator Overloading ******************************/
void classesQuestion2() {
	cout << endl;
	Flower f1("petunia", 4, 1.50);
	cout << f1.getName() << "," << f1.getPrice() << endl;
}

void classesQuestion3() {
	cout << endl;
}

void classesQuestion4() {
	cout << endl;
}

void classesQuestion5() {
	cout << endl;
}

/************************** Revision - Pointers & Dynamic Memory ******************************/

void pointersQuestion1() {
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
}

void pointersQuestion2() {
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
}

void pointersQuestion5() {
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
}