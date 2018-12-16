#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>

#include "menu.h"
#include "init_list.h"
#include "delete_list.h"

// 1 - create flist
// 2 - add node at the begining of flist
// 3 - add node in the position of flist
// 4 - add node at the end of flist
// 5 - edit any node
// 6 - sort and display by family name
// 7 - sort and display by salory
// 8 - sort and display by age
// 9 - reverse and display flist
//10 - delete node from begining of flist
//11 - delete node from the end of flist
//12 - delete node by value
//13 - delete list completely
//14 - write data to file
//15 - read data from file




int main()
	{
	//Node *head = new Node;
	Node *head = nullptr;
	switch (menu())
		{
		case 1:
			//std::cout << item << '\n';
			init(10, head); break;
		case 2:
			//std::cout << item << '\n';
			//adHead_List ();
{
struct tm *ptr;
time_t lt;
lt = time(nullptr);
ptr = localtime (&lt);
time_t yr = (ptr->tm_year);
std::cout << lt << std::endl;
std::cout << yr + 1900 << std::endl;
std::cout << ctime (&lt)<< std::endl;
std::cout << asctime (ptr)<< std::endl;
}

			break;

		case 3:
			//std::cout << item << '\n'; break;
			{
			std::tm *ptr;
			auto time_now = std::chrono::system_clock::now();
			time_t today = std::chrono::system_clock::to_time_t (time_now);
			ptr = localtime (&today);
			int yr18 = 1900 + int(ptr->tm_year);
			std::cout << today << std::endl;
			std::cout<< yr18 << std::endl;}


break;
		case 4:
			//std::cout << item << '\n';
			break;
		case 5:
			//std::cout << item << '\n';
			break;
		case 6:
			//std::cout << item << '\n';
			break;
		case 7:
			//std::cout << item << '\n';
			break;
		case 8:
			//std::cout << item << '\n';
			break;
		case 9:
			//std::cout << item << '\n';
			break;
		case 10:
			//std::cout << item << '\n';
			break;
		case 11:
			//std::cout << item << '\n';
			break;
		case 12:
			//std::cout << item << '\n';
			break;
		case 13:
			//std::cout << item << '\n';
			break;
		case 14:
			//std::cout << item << '\n';
			break;
		case 15:
			//std::cout << item << '\n';break;
			break;
		default: std::cout << "default" << '\n'; break;
		}
	delete head;
	return 0;
	}
