#include "menu.h"
#include <iostream>
#include <fstream>
#include <string>
#include "init_list.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

size_t  menu()
	{
	size_t item = 0;

	std::cout << "1 - create flist" << '\n';
	std::cout << "2 - add node at the begining of flist" << '\n';
	std::cout << "3 - add node in the position of flist" << '\n';
	std::cout << "4 - add node at the end of flist" << '\n';
	std::cout << "5 - edit any node" << '\n';
	std::cout << "6 - sort and display by family name" << '\n';
	std::cout << "7 - sort and display by salory" << '\n';
	std::cout << "8 - sort and display by age" << '\n';
	std::cout << "9 - reverse and display flist" << '\n';
	std::cout << "10 - delete node from begining of flist" << '\n';
	std::cout << "11 - delete node from the end of flist" << '\n';
	std::cout << "12 - delete node by value" << '\n';
	std::cout << "13 - delete list completely" << '\n';
	std::cout << "14 - write data to file" << '\n';
	std::cout << "15 - read data from file" << '\n';

	std::cin >> item;

	return item;
	}
