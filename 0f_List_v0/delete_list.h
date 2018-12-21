#ifndef DELETE_LIST_H
#define DELETE_LIST_H
#include "init_list.h"

/*
// 1 - create flist
// 2 - add node at the begining of flist
// 3 - add node in the position of flist
// 4 - add node at the end of flist
// 5 - edit any node
// 6 - sort and display by family name
// 7 - sort and display by salory
// 8 - sort and display by age
// 9 - reverse and display flist}*/
//10 - delete node from begining of flist
//11 - delete node from the end of flist
//12 - delete node by value
//13 - delete list completely
/*
//14 - write data to file
//15 - read data from file*/


Node* rm_first(Node* head);
void rm_last(Node* head);
Node* rm_value(Node* head);
void rm_all(Node* head);

#endif // DELETE_LIST_H
