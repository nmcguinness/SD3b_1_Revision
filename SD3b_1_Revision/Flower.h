#pragma once
#include <iostream>
using namespace std;

class Flower
{
	//member variables
private:
	//Exercise 2
	string name;
	int petals;
	double price;

	//method declarations
public:
	Flower();
	Flower(string name, int petals, double price);

	string getName() const;
	double getPrice() const;
	bool operator==(Flower other);
};
