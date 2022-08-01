#pragma once
#include <string>
template <typename T>
class File
{
private:
	std::string _fileName;
	std::ofstream _fout;
public:
	File(std::string fileName, T data);
	~File();
};

