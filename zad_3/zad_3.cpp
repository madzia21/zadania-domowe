// 3. Napisz funkcję, która przyjmuje dwa stringi a następnie zwraca vector ich wspólnych liter(powtarzajcych sie w obu stringach).

#include <iostream>
#include <algorithm>
#include <vector>

std::vector<char> commonLetters(std::string a, std::string b)
{
    std::vector<char> wektor;
    std::copy_if(a.begin(), a.end(), std::back_inserter(wektor), [&wektor, &b](char x)
        {
            for (int i = 0; i < b.size(); ++i)
            {
                if (x == b[i])
                {
                    return x;
                }
            }
        }
    );
    return wektor;
}

int main()
{
    std::vector<char> commonLettersCaptured = commonLetters("Madagaskar", "Mkar");

    for (int i = 0; i < commonLettersCaptured.size(); ++i)
    {
        std::cout << commonLettersCaptured[i];
    }
}