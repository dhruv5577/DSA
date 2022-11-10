#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

class Stack
{
public:
    Node *top;

    Stack()

    {
        this->top = NULL;
    }
    void push(int v)
    {
        struct Node *temp = new Node;
        temp->data = v;

        temp->next = top;
        top = temp;
    }
    void pop()
    {
        if (isempty())
            cout << "Stack is UNDERFLOW" << endl;

        else
        {
            cout << top->data << " Is POPPED" << endl;

            top = top->next;
        }
    }
    int peek()
    {
        return top->data;
    }

    bool isempty()
    {
        if (top == NULL)
            return true;

        return false;
    }
    void Print()
    {
        if (isempty())
            cout << "Stack Is UNDERFLOW" << endl;
        else
        {
            struct Node *temp;
            temp = top;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack a1;
    a1.push(8);
    a1.push(7);
    a1.push(4);
    cout << "First element " << a1.peek() << endl;
    a1.pop();

    Stack a2;
    a2.push(6);
    a2.push(8);
    a2.push(2);

    a2.Print();
    a1.Print();
    return 0;
}