#pragma once
#include <chrono>
using namespace std;

//global variable BUT we aren't a fan of global variables
const double EPSILON = 1E-4; //0.0001

/// @brief Compares two doubles to within EPSILON of precision
/// @param x
/// @param y
/// @param epsilon
/// @return
bool equalsWithin(double x, double y, double epsilon) {
	double diff = abs(x - y);
	return diff <= epsilon;
}

template<typename Func>
double measureTime(Func func) {
	chrono::time_point<chrono::high_resolution_clock> start
		= chrono::high_resolution_clock::now();
	func();
	chrono::time_point<chrono::high_resolution_clock> end
		= chrono::high_resolution_clock::now();
	return (end - start) / chrono::nanoseconds(1);
}
