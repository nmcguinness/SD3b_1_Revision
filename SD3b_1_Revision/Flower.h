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
	bool operator==(const Flower& other);
	void operator+(double delta);
	void operator++();
	void operator++(int x);

	//f1 += 2.5
	void operator+=(double delta);
	bool operator!=(const Flower& other);

	//friend methods break encapsulation
	friend ostream& operator<<(ostream& out, const Flower& flower);
};
