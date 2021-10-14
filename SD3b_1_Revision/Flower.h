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

	//cout << f1;
	friend ostream& operator<<(ostream& out, const Flower& flower);
};

//cout << f1 << "," << f2 << ...
ostream& operator<<(ostream& out, const Flower& flower) {
	out << flower.name;
	cout << ",";
	out << flower.petals;
	cout << ",";
	out << flower.price;
	return out;
}

bool Flower::operator==(const Flower& other)
{
	return this->name == other.getName()
		//TODO - comparing two doubles!
		&& this->price == other.getPrice();
}

string Flower::getName() const {
	return this->name;
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
