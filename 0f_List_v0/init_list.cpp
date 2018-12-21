#include "init_list.h"
#include <iostream>
#include <random>
#include <cstring>
#include <chrono>



size_t curYear()
	{
	std::tm *p_today;
	auto time_now = std::chrono::system_clock::now ();
	time_t today = std::chrono::system_clock::to_time_t (time_now);
	p_today = localtime (&today);
	size_t year_cur = size_t(p_today->tm_year)+1900;
	return year_cur;
	}

Node* init(size_t a, Node* head)
	{
	std::random_device rd;
	std::mt19937 mt_rand(rd());
	std::uniform_int_distribution<int> alph('A','Z'), numb(1930,2002);
	std::uniform_real_distribution<float> money(1000.00, 3000.00);
	char tmp_name[l_name] = {'\0'};
	for (size_t i = 0 ; i < a; ++i)
		{
		for(int j = 0; j < l_name-1; ++j)
			{tmp_name[j] = char (alph(mt_rand));}

		Node *tmp = new Node;
		strncpy (tmp->name, tmp_name, l_name);
		tmp->birth_day = numb(mt_rand);
		tmp->age = curYear () - size_t(tmp->birth_day);
		tmp->pay = money(mt_rand);
		tmp->next = nullptr;
		if(head != nullptr)
			{
			Node *temp = head;
			while(temp->next!= nullptr)
				{
				temp = temp->next;
				}
			temp->next = tmp;
			}
		else {
			head = tmp;
			}
		}

	return head;
	}

Node* adHead_List(Node* head)
	{
	char f_name[l_name] = {'\0'};
	std::cout << "Enter familyname: " << std::endl;
	std::cin.getline (f_name, l_name-1, '\n');
	Node* tmp = new Node;
	strncpy (tmp->name, f_name, l_name);
	std::cout << "Enter year of birthday: " << std::endl;
	std::cin >> std::dec >> tmp->birth_day;
	tmp->age = curYear ()- size_t(tmp->birth_day);
	tmp->next = nullptr;
	if (head != nullptr)
		{
		Node * cur = new Node;
		cur = head;
		head = tmp;
		head->next = cur;
		}
	else if(head == nullptr)
		{
		head= tmp;
		}
	return head;
	}



void adEnd_List(Node* head)
	{

	char f_name[l_name] = {'\0'};
	std::cout << "Enter familyname: " << std::endl;
	std::cin.getline (f_name, l_name-1, '\n');
	Node *tmp = new Node;
	strncpy (tmp->name, f_name, l_name);
	std::cout<< "Enter year of birthday: "<< std::endl;
	std::cin >> std::dec >> tmp->birth_day;
	tmp->age = curYear () - size_t(tmp->birth_day);
	tmp->next = nullptr;

	Node* cur = head;
	while (cur!= nullptr)
		{
		cur = cur->next;
		}
	cur->next= tmp;
	}

void ad2pos_List(Node* head)
	{
	char f_name[l_name] = {'\0'};
	std::cin.getline (f_name, l_name-1, '\n');
	Node* tmp = new Node;
	std::cout << "Enter year of birthday: " << std::endl;
	std::cin>> std::dec >> tmp->birth_day;
	tmp->age = curYear () - size_t(tmp->birth_day);
	tmp->next = nullptr;

	}
