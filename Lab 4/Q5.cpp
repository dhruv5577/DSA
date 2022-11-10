#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    int pri;

    struct node *next;
};
class Q1
{
public:
    struct node *front;
    Q1()

    {
        this->front = NULL;
    }
    void insert(int a, int p)
    {
        node *temp = new node();

        node *ptr = new node();
        temp->data = a;

        temp->pri = p;

        if (front == NULL || front->pri > p)
        {
            temp->next = front;
            front = temp;
            return;
        }

        ptr = front;

        while (ptr->next != NULL && ptr->next->pri <= p)

            ptr = ptr->next;

        temp->next = ptr->next;
        ptr->next = temp;
    }
    void del()
    {

        if (front == NULL)
            cout << "UNDERFLOW"
                 << " ";

        else
        {
            front = front->next;
        }
    }

    bool isempty()
    {
        if (front == NULL)
            return true;
        else
            return false;
    }
    int length()
    {
        node *temp = front;

        int count = 0;

        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    void Print()
    {
        node *ptr;
        ptr = front;
        if (front == NULL)
            cout << "Queue is empty\n";
        else
        {
            cout << "Queue"
                 << " ";

            cout << "Priority   Item"
                 << " ";
            while (ptr != NULL)
            {
                cout << ptr->pri << "    " << ptr->data << endl;
                ptr = ptr->next;
            }
        }
    }
};

int main()
{
    Q1 a1;
    a1.insert(34, 2);
    a1.insert(56, 1);
    a1.insert(58, 7);
    a1.insert(13, 5);
    a1.del();

    a1.Print();
    return 0;
}