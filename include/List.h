#pragma once
#include <iostream>

typedef struct Node
{
    int data;
    Node * next;
} Node;

class List
{
public:
    List();
    void createNode(int a);
    Node* searchL(int a);
    void display();
    void insert_Start(int a);
    void insert_Pos(int pos, int a);
    void del_first();
    void del_last();
    void del_pos(int pos);
    void insertion_Sort();
    void odd(List& l);
private:
    Node *head, *tail;
};
