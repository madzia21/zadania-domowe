// 5. Napisz funkcję, która zliczy wystąpienia podanej litery w podanym stringu(count).

#include <iostream>
#include <algorithm>
int countGivenLetter(std::string a, char x)
{
   int counter = std::count_if(a.begin(), a.end(), [x](char l) {return l == x; });
   return counter;
}

int main()
{
    std::string word = "Madagaskar";
    char l = 'a';
    int counter = countGivenLetter(word, 'M');
    std::cout << counter;
}