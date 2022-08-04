#include "File.h"
#include <fstream>
#include "Employee.hpp"
#include <iostream>

//template <typename T>
//File<T>::File(std::string fileName, T data) :
//	_fout(_fileName, std::ios::out | std::ios::app)
//{
//	_fileName = fileName;
//	
//	if (_fout.is_open())
//	{
//		if (_fout.good())
//		{
//			_fout << data;
//		}
//	}
//}
//template <typename T>
//File<T>::~File()
//{
//	_fout.close();
//}
