
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//1. Napisz funkcję, która przyjmuje stringa, następnie uszereguje wszystkie litery
//w porządku alfabetycznym i zwraca tak odwróconego stringa(sort).

//std::string inAlphabeticalOrder(std::string word)
//{
//    int size = static_cast<int>(word.size());
//    for (int j = 0; j < size; ++j)
//    {
//        for (int i = 0; i < size - 1; ++i)
//        {
//            if (word[i] > word[i + 1])
//            {
//                char temp = word[i];
//                word[i] = word[i + 1];
//                word[i + 1] = temp;
//            }
//        }
//        size--;
//    }
//    return word;
//}

std::string inAlphabeticalOrder(std::string word)
{
    std::sort(word.begin(), word.end(), [](int a, int b) 
        {
        return a < b;
        });
    return word;
}

int main()
{
    std::cout << inAlphabeticalOrder("Ala Ma Kota") << std::endl;
}