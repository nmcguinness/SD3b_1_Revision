#pragma once

//max, min
void getMinMax(int* pArray, int length, int position, int& min, int& max) {
	//if you are at the end then stop/return
	if (position == length)
		return;

	//else if the current number is < min then set, and > max then set
	if (min > pArray[position])
		min = pArray[position];

	if (max < pArray[position])
		max = pArray[position];

	getMinMax(pArray, length, position + 1, min, max);
}

/// @brief Exercise 5 - Returns 2^exponent
/// @param exponent Integer, where exponent >= 0 and is an integer
/// @return Integer 2^exponent
int power(int exponent) { //3
	if (exponent > 0)
	{
		return 2 * power(exponent - 1);
	}
	return 1;
}

//2 * power(2)
//2 * 2 * power(1)
//2 * 2 * 2 * power(0)
//2 * 2 * 2 * 1 = 8
