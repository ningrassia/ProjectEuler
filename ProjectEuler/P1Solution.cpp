#include "stdafx.h"
#include "P1Solution.h"
#include <sstream>

P1Solution::P1Solution()
{
	init("Multiples of 3 and 5", "Find the sum of multiples of 3 and/or 5 below 1000");
}


P1Solution::~P1Solution()
{
}

std::string P1Solution::solve() {
	int sum = 0;
	std::stringstream solution;

	for (int i = 0; i < 1000; i++) {
		if (!(i % 3) || !(i % 5))
			sum += i;
	}
	solution << sum;
	return solution.str();
}
