#include "stdafx.h"
#include "P7Solution.h"
#include <sstream>
#include <iostream>

std::string P7Solution::solve()
{
	std::stringstream ans;
	int count;
	long long test = 1;
	for (count = 1; count < 10001; count++) {
		test++;
		while (!isPrime(test)) {
			test++;
		}
	}
	ans << test;
	return ans.str();
}

P7Solution::P7Solution()
{
	init("10001st prime", "Finds the 10001st prime number");
}


P7Solution::~P7Solution()
{
}
