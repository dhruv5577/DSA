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
void dlldlt(int n)
{
    struct Node *temp = new Node;
    struct Node *t = new Node;
    if (first == NULL)
    {
        cout << "LL is blank";
    }
    else
    {
        t = first;
        while (t->data != n)
            t = t->next;
        t->prev->next = t->next;
        if (t->next)
            t->next->prev = t->prev;
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
    dllapnd(9);
    dllapnd(17);
    dllapnd(28);
    dllapnd(11);

    dlldlt(28);
    show();
}