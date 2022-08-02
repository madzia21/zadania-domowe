// 10. Napisz funkcję, która zwróci wszystkie możliwe permutacje 3 liczb(next_permutation)

#include <iostream>
#include <algorithm>
#include <vector>

void threeNumbersPermutations(int x, int y, int z)
{
    std::vector<int> digits { x, y, z };
    do
    {
        std::cout << digits[0] << digits[1] << digits[2] << std::endl;
    }
   while( std::next_permutation(digits.begin(), digits.end()));
}

int main()
{
    threeNumbersPermutations(1, 2, 3);
}