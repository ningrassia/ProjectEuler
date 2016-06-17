#include "stdafx.h"
#include "P3Solution.h"
#include <sstream>

std::string P3Solution::solve() {
	const long long number = 600851475143;
	long long test = long long(sqrt(number)) + 1; //should be odd (yes this is hacky but w/e)
	long long result = 0;
	std::stringstream answer;
	
	for (long long i = 3; i < test; i += 2) {
		if (isPrime(i) && (number%i == 0))
			result = i;
	}
	answer << result;
	return answer.str();
}

P3Solution::P3Solution()
{
	init("Largest prime factor", "bla");
}


P3Solution::~P3Solution()
{
}
