// 7. Napisz funkcję, która stworzy wektor przechowujący potęgi kwadratowe z podanego zakresu np od. 3 do 10 (for_each)

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

std::vector<int> squarePower(int x, int y)
{
    std::vector<int> wektor((y-x)+1);
    std::iota(wektor.begin(), wektor.end(), x);
   
    std::for_each(wektor.begin(), wektor.end(), [](int& x) { return x *= x; });
    return wektor;
}

int main()
{
    auto wektor = squarePower(2, 4);

    std::for_each(wektor.begin(), wektor.end(), [](int x) {std::cout << x << ", "; });
}