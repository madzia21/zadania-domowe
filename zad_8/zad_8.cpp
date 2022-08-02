//8. Zmień poprzednie zadanie tak aby zwracało sumę kwadratów(accumulate)

#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

auto squarePowerSSum(int x, int y)
{
    std::vector<int> wektor((y - x) + 1);
    std::iota(wektor.begin(), wektor.end(), x);
    std::for_each(wektor.begin(), wektor.end(), [](int& x) { return x *= x; });
    auto sum = std::accumulate(wektor.begin(), wektor.end(), 0);
    return sum;
}

int main()
{
    std::cout << squarePowerSSum(2, 4);
}