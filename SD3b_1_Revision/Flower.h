#pragma once
#include <iostream>
#include "Utilities.h"
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
	int getPetals() const;
	double getPrice() const;
	void operator+(double delta);
	void operator++();

	//not required by exercises but interesting to consider
	void operator++(int x);
	void operator+=(double delta);
	bool operator==(const Flower& other);
	bool operator!=(const Flower& other);

	//friend methods break encapsulation
	friend ostream& operator<<(ostream& out, const Flower& flower);
};

//question 3
ostream& operator<<(ostream& out, const Flower& flower) {
	out << flower.name;
	cout << ",";
	out << flower.petals;
	cout << ",";
	out << flower.price;
	return out;
}

//question 4
//f1 + 1, f1 + 3.4
void Flower::operator+(double delta) {
	this->price += delta;
}

//question 5
//pre-increment(++x)
void Flower::operator++() {
	this->petals++;
}

//post-increment (x++)
void Flower::operator++(int x) {
	this->petals++;
}

void Flower::operator+=(double delta)
{
	this->price += delta;
}

bool Flower::operator!=(const Flower& other)
{
	//return !(this->name == other.getName()
	//	&& this->price == other.getPrice());

	//Remember that "this" is a pointer, so if we dereference (*) then we can access the object
	return !(*this == other);
}

bool Flower::operator==(const Flower& other)
{
	//return this->name == other.getName()
	//	//TODO - comparing two doubles!
	//	&& this->price == other.getPrice();

	//Note even though this is a more effective solution we
	//are not fans of global constants - ESPSILON
	return this->name == other.getName()
		&& equalsWithin(this->price, other.getPrice(), EPSILON);
}

string Flower::getName() const {
	return this->name;
}
int Flower::getPetals() const
{
	return this->petals;
}
double Flower::getPrice() const {
	return this->price;
}

//Flower::Flower() : name(""), petals(0), price(0) {}
Flower::Flower() {
	//(*this).name = "";
	this->name = "";
	this->petals = 0;
	this->price = 0;
}

//Flower::Flower(string name, int petals, double price) :
//	name(name), petals(petals), price(price) {}

Flower::Flower(string name, int petals, double price) {
	this->name = name;
	this->petals = petals;
	this->price = price;
}
