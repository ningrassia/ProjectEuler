#include "stdafx.h"
#include "PEUtil.h"
#include <cmath>
//This is where utility functions go!

bool isMultiple(int num, int max)
{
	for (int i = 3; i <= max; i++) //skip 2, only check even numbers
	{
		if ((num%i) != 0)
			return false;
	}
	return true;
}

bool isPalindrome(int num)
{
	int digits[10]; //optimize this later?
	int i = 0;
	//get digits
	while (num > 0)
	{
		digits[i] = num % 10;
		i++;
		num = num / 10;
	}
	const int mid = i / 2;
	//check palindrome digits
	for (int j = 0; j < mid; j++)
	{
		if (digits[j] != digits[i - 1 - j])
			return false;
	}
	return true;
}


bool isPrime(long long test) {
	//skip 2 and even numbers
	if (!(test % 2))
		return false;

	for (long long i = 3; i < int(sqrt(test)); i = i + 2) {
		if (!(test % i))
			return false;
	}
	return true;
}

