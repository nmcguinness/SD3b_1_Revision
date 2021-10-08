#pragma once

/// @brief Returns 2^exponent
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
