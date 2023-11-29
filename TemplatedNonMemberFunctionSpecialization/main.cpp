#include <iostream>

#include "MyArray.h"
#include "XYZ.h"

int main()
{
	MyArray<int> maInt{4};
	std::cout << maInt << std::endl;

	MyArray<std::string> maString{4};
	std::cout << maString << std::endl;

	MyArray<XYZ> maXYZ{4};
	std::cout << maXYZ << std::endl;

	return 0;
}