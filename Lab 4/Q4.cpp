#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

class QUEUE
{
public:
    struct node *front;
    struct node *rear;

    QUEUE()
    {
        this->front = NULL;
        this->rear = NULL;
    }
    void enque(int a)
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
    void dequeue()
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

            front = front->next;
            free(ptr);
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
            cout << "Queue is empty" << endl;
            return;
        }
        node *temp = front;

        while (temp != NULL)
        {
            cout << temp->data;

            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    QUEUE a1;
    a1.enque(23);
    a1.enque(31);
    a1.enque(4);
    a1.enque(32);
    a1.dequeue();

    cout << a1.length() << endl;

    a1.Print();

    return 0;
}