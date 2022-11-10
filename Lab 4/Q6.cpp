#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Queue
{
    struct node *front;
    struct node *rear;

public:
    Queue()
    {
        this->front = NULL;
        this->rear = NULL;
    }
    void enqueatend(int a)
    {
        node *temp = new node();

        temp->data = a;

        temp->next = NULL;
        if (front == NULL)
        {
            front = temp;
            rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    void enqueatfirst(int a)
    {
        node *temp = new node();

        temp->data = a;
        temp->next = NULL;

        if (front == NULL)
        {
            front = temp;
            rear = temp;
            return;
        }

        temp->next = front;
        front = temp;
    }
    void dequeueatfirst()
    {

        if (front == NULL)
        {
            cout << "UNDERFLOW";
            return;
        }
        if (front == rear)
        {
            front = rear = NULL;
        }
        else
        {
            node *ptr = front;
            front = front->next;

            free(ptr);
        }
    }

    void dequeueatend()
    {

        if (front == NULL)
        {
            cout << "UNDERFLOW";
            return;
        }
        if (front == rear)
        {
            free(front);
            front = rear = NULL;
        }
        else
        {
            node *ptr = front;

            node *p1 = new node();

            while (ptr->next != NULL)
            {
                p1 = ptr;
                ptr = ptr->next;
            }
            p1->next = NULL;
            rear = p1;
        }
    }
    bool isempty()
    {
        if (front == NULL && rear == NULL)
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

        if ((front == NULL) && (rear == NULL))
        {
            cout << "Empty QUEUE" << endl;

            return;
        }

        node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue a1;
    a1.enqueatend(1);
    a1.enqueatend(24);
    a1.enqueatend(87);

    a1.enqueatend(45);
    a1.enqueatfirst(4);

    a1.Print();
    a1.dequeueatfirst();
    a1.dequeueatend();

    a1.Print();
    return 0;
}