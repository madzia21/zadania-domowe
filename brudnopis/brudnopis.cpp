#include <iostream>
#include <vector>
#include <fstream>
int main()
{
    // tworzenie i inicjalizacja vectora
    // 1
    std::vector<int> nums(1000); // 1000 elementów zainicjalizowanych 0
    // 2
    std::vector<int> nums2;
    nums2.reserve(1000);
    // for()
    // push_back()

    std::fstream file("plik.txt", std::ios::in | std::ios::out | std::ios::app); // jesli użycie obiektu typu fstream wtedy flagi musimy ustwić
    // ofstream - flagi domyślnie ustwione
    // ifstream - flagi ustawić

    // profesjonalnie, zamiast <fstream> używamy <filestream>, ale nie działą na androidzie
    // flaga app - upewniia nas, ze zawsze będziemy na na końcu kpliku i nigdy niczego nie nadpiszemy, dobrze jest ją stosować z trunc, który czyści 
    // plik

    // do funkcji przekazywać przez stałą referencję - dobra praktyka


}