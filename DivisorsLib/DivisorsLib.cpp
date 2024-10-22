#include <vector>
#include <cmath>

std::vector<unsigned long long> divisors(unsigned long long number)
{
	//write more fast algorithm(whatch the lecture) [DONE!]
	std::vector<unsigned long long> result;
	for (unsigned long long i = 1; i <= std::sqrt(number); ++i)
	{
		if (number % i == 0)
		{
			result.push_back(i);
			if (i != number / i)
			{
				result.push_back(number / i);
			}
		}
	}
	return result;
}
//Beksultan Ibragimov 56916