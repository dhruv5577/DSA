#include <bits/stdc++.h>
using namespace std;
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *first = NULL;

void dllapnd(int n)
{
    struct Node *temp = new Node;
    struct Node *t = new Node;

    if (first == NULL)
    {
        t->prev = NULL;
        t->data = n;
        t->next = NULL;
        first = t;
    }
    else
    {
        t = first;

        while (t->next != NULL)

            t = t->next;
        temp->data = n;
        t->next = temp;
        temp->prev = t;
        temp->next = NULL;
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
    dllapnd(8);
    dllapnd(6);
    show();
}