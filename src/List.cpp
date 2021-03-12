#include "List.h"

List::List()
{
    head = NULL;
    tail = NULL;
}

void List::createNode(int a)
{
    Node * temp = new Node;
    temp->data = a;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

Node * List::searchL(int a)
{
    Node * p = head;
    while(p != NULL && p->data != a)
    {
        p = p->next;
    }

    return p;
}

void List::display()
{
    Node *temp = new Node;
    temp = head;
    while(temp!=NULL)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
}

void List::insert_Start(int a)
{
    Node *temp = new Node;
    temp->data = a;
    temp->next = head;
    head = temp;
}

void List::insert_Pos(int pos, int a)
{
    Node *pre = new Node;
    Node *cur = new Node;
    Node *temp = new Node;
    cur = head;
    for(int i = 0; i < pos; ++i)
    {
        pre = cur;
        cur = cur->next;
    }

    temp->data = a;
    pre->next = temp;
    temp->next = cur;
}

void List::del_first()
{
    Node *temp = new Node;
    temp = head;
    head = head->next;
    delete temp;
}

void List::del_last()
{
    Node *cur = new Node;
    Node *pre = new Node;
    cur = head;
    while(cur->next != NULL)
    {
        pre = cur;
        cur = cur->next;
    }
    tail = pre;
    pre->next = NULL;
    delete cur;
}

void List::del_pos(int pos)
{
    Node *cur = new Node;
    Node *pre = new Node;
    cur = head;
    for(int i = 0; i < pos; ++i)
    {
        pre = cur;
        cur = cur->next;
    }
    pre->next = cur->next;
}

void List::insertion_Sort()
{
    Node *r = head->next;
    if(r != NULL)
    {
        Node *s = head->next;
        while(s != NULL)
        {
            if(r->data <= s->data)
            {
                r = s;
            }
            else
            {
                r->next = s->next;
                Node *p = head;
                Node *q = head->next;
                while(q->data <= s->data)
                {
                    p = q;
                    q = q->next;
                }
                s->next = q;
                p->next = s;
            }
            s = r->next;
        }
    }
}

void List::odd(List& l)
{
    Node *p = head;

    while(p != NULL)
    {
        if(p->data % 2 == 1)
        {
            l.createNode(p->data);
        }
    }
}
