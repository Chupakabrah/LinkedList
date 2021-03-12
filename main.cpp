#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "List.h"

using namespace std;

int main()
{
    srand(time(NULL));
    List l;
    List l2;
    for(int i = 0; i < 25; ++i)
    {
        l.createNode(rand() % 100);
    }
    l.display();
    l.odd(l2);
    cout << endl;
    l2.display();
    cout << endl;
    if(l.searchL(5) != NULL)
    {
        cout << l.searchL(5)->data << endl;
    }
    else
    {
        cout << "NULL\n";
    }
    l.insertion_Sort();
    l.display();
    return 0;
}
