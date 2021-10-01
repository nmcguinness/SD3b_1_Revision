// SD3b_1_Revision.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Functions.h"

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


}

