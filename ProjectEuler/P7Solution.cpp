#include "stdafx.h"
#include "P7Solution.h"
#include <sstream>
#include <iostream>

std::string P7Solution::solve()
{
	std::stringstream ans;
	int count = 0;
	int test = 2;
	while (count <= 10001)
	{
		if (isPrime(test))
		{
			count++;
			if(count < 10001)
				test++;
		}
		else
		{
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
