// 13. Napisz funkcję, która znajdzie pierwszą większą liczbę, która jest palindromem od zadanej liczby.

#include <iostream>
#include <random>
#include <string>
#include <algorithm>

int randomNumbersGenerator(int range)
{
	std::random_device randomDevice;
	std::default_random_engine defaultRandomEngine(randomDevice());
	std::uniform_int_distribution<int> distribution(1, range);
	return distribution(defaultRandomEngine);
}

int palindromOfThisNumber(int number)
{
	std::string numberToReverse = std::to_string(number);
	std::reverse(numberToReverse.begin(), numberToReverse.end());
	return std::stoi(numberToReverse) +1;
}

int main()
{
	std::cout << randomNumbersGenerator(1000) << std::endl;
	std::cout << palindromOfThisNumber(123) << std::endl;
}