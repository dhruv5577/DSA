#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *first = NULL;

void addend(int n)
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
void show()
{
    Node *t = first;

    while (first != NULL)
    {
        cout << first->data << " ";
        first = first->next;
    }
}
int main()
{

    addend(5);
    addend(13);
    addend(18);
    show();
}