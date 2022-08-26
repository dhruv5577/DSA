#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *first = NULL;

void addstrt(int n)
{
    struct Node *temp = new Node;
    struct Node *t = new Node;

    temp->data = n;
    if (first == NULL)
    {
        first = temp;
        first->next = NULL;
    }

    else
    {
        temp->next = first;
        first = temp;
    }
}

void show()
{

    while (first != NULL)
    {
        cout << first->data << " ";
        first = first->next;
    }
}
int main()
{

    addstrt(7);
    addstrt(16);
    addstrt(5);
    addstrt(43);

    show();
}