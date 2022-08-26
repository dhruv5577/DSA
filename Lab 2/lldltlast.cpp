#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *first = NULL;

void addlast(int n)
{
    struct Node *temp = new Node;
    struct Node *t = new Node;

    temp->data = n;
    temp->next = NULL;
    if (first == NULL)
    {
        first = temp;
    }

    else
    {
        t = first;
        while (t->next != NULL)
        {
            t = t->next;
        }

        t->next = temp;
    }
}
void dltlast()
{

    struct Node *t = new Node;
    if (first == NULL)
    {
        cout << "Linked list is empty";
    }

    else
    {
        t = first;

        while (t->next->next != NULL)
        {
            t = t->next;
        }
        t->next = NULL;
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

    addlast(14);
    addlast(15);
    addlast(18);
    addlast(32);

    dltlast();

    show();
}