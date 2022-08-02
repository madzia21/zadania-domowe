// 6. Napisz funkcję, która sprawdzi czy podany string jest palindromem(reverse i transform lub equal)

#include <iostream>
#include <algorithm>

bool isPalindrom(std::string a)
{
    std::string b = a;
    std::reverse(b.begin(), b.end());
    
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main()
{
    std::cout << isPalindrom("madagaskar");
}