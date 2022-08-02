//4. Napisz funkcję, która usunie spacje z podanego stringa.Zadanie wykonaj na dwóch kontenrach : vector i list(remove i erase)

#include <iostream>
#include <string>

void withoutWhiteSpaces(std::string &a)
{
	a.erase( std::remove_if(a.begin(), a.end(), [](char x) {return x == ' '; }), a.end());
}

int main()
{
   std::string zdanie = "Ala ma kota, a kot ma Alę";
   withoutWhiteSpaces(zdanie);
   std::cout << zdanie;
}