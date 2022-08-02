// 2. Napisz analogiczną funkcję, która zwróci przemieszanego stringa(random_shuffle).
// Zwróć uwagę czy za każdym uruchomieniem, faktycznie string jest przemieszany innaczej
#include <iostream>
#include <string>
#include <algorithm>
#include <random>
std::string inRandomOrder(std::string word)
{
    std::random_device randomDevice;
    std::mt19937 g(randomDevice());
    std::shuffle(word.begin(), word.end(), g);
    return word;
}

int main()
{
    std::cout << inRandomOrder("Madagaskar");
}