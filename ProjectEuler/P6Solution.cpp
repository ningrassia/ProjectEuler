#include "stdafx.h"
#include "P6Solution.h"
#include <sstream>

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
std::string P6Solution::solve()
{
	const int max = 100;
	int sumsqr = 0;
	int sqrsum = 0;
	std::stringstream ans;

	for (int i = 0; i <= max; i++) {
		sumsqr += (i * i);
		sqrsum += i;
	}
	sqrsum = sqrsum * sqrsum;

	ans << abs(sqrsum - sumsqr);

	return ans.str();
}

P6Solution::P6Solution()
{
	init("Sum of squares - Square of sums", "Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.");
}


P6Solution::~P6Solution()
{
}
