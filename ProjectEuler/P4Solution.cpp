#include "stdafx.h"
#include "P4Solution.h"
#include <sstream>


std::string P4Solution::solve()
{
	std::stringstream ans;
	int test, max = 0;

	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			test = i*j;
			if ((test > max) && isPalindrome(test)) {
				max = test;
			}
		}
	}

	ans << max;
	return ans.str();
}

P4Solution::P4Solution()
{
	init("Largest palindromic product of 2 3-digit numbers.", "whatever");
}


P4Solution::~P4Solution()
{
}
