#ifndef INIT_LIST_H
#define INIT_LIST_H
#include <iostream>
#include <chrono>

// 1 - create flist
// 2 - add node at the begining of flist
// 3 - add node in the position of flist
// 4 - add node at the end of flist
// 5 - edit any node
/*
// 6 - sort and display by family name
// 7 - sort and display by salory
// 8 - sort and display by age
// 9 - reverse and display flist
//10 - delete node from begining of flist
//11 - delete node from the end of flist
//12 - delete node by value
//13 - delete list completely
//14 - write data to file
//15 - read data from file*/




const int l_name = 32;
struct Man {

	char name[l_name];
	int birth_day;
	size_t age;
	float pay;
};
struct Node: Man
{
	Node* next;
};

size_t curYear();
Node* init(size_t, Node* head);
Node* adHead_List(Node* head);
void adEnd_List(Node* head);
void ad2pos_List(Node* head);
void edit(Node* current);

#endif // INIT_LIST_H
