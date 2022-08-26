#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *first = NULL;

void add(int n)
{
    struct Node *head = new Node;
    head->data = n;
    head->next = first;
    first = head;
}
void print(struct Node *p, int n)
{
    int count = 0;
    bool flag = false;
    while (p != NULL)
    {
        count++;
        if (p->data == n)
        {
            cout << count;
            flag = true;
            break;
        }
        p = p->next;
    }
    if (!flag)
        cout << "Not Found";
}

int main()
{

    add(14);
    add(2);
    add(7);
    add(9);
    add(8);
    add(12);

    print(first, 6);
}