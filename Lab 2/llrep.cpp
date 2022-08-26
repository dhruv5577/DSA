#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *first = NULL;
bool flag = false;
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
void rep(int n, int a)
{

    struct Node *t = new Node;
    if (first == NULL)
    {
        cout << "Linked list is empty";
    }

    else
    {
        t = first;

        while (t->next != NULL)
        {
            if (t->data == n)
            {
                t->data = a;
                break;
            }
            t = t->next;
        }
        if (t->next != NULL)
            flag = true;
        else
            flag = false;
    }
}
void show()
{
    if (flag)
    {
        while (first != NULL)
        {
            cout << first->data << " ";
            first = first->next;
        }
    }
    else
        cout << -1;
}
int main()
{

    addlast(32);
    addlast(13);
    addlast(15);
    addlast(19);

    rep(15, 33);

    show();
}