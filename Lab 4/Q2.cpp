#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    struct Node *next;

} *top = NULL;

class Stack
{
public:
    void push(int v)
    {
        struct Node *temp = new Node;
        temp->data = v;
        temp->next = top;
        top = temp;
    }
    int pop()
    {
        int a = top->data;
        if (top == NULL)
            cout << "Stack Is UNDERFLOW" << endl;
        else
        {
            top = top->next;
        }
        return a;
    }
    int peek()
    {
        return top->data;
    }

    int solve(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
                continue;

            else if (s[i] != '/' && s[i] != '*' && s[i] != '+' && s[i] != '-')
            {
                int num = 0;

                while (isdigit(s[i]))
                {
                    num = num * 10 + (int)(s[i] - '0');
                    i++;
                }
                push(num);
            }
            else
            {
                int a = pop();
                int b = pop();

                if (s[i] == '/')
                    push(b / a);
                else if (s[i] == '+')
                    push(b + a);
                else if (s[i] == '*')
                    push(a * b);
                else
                    push(b - a);
            }
        }
        return peek();
    }
};

int main()
{
    Stack o1;
    cout << o1.solve("34 5 2 + * 7 -");
    return 0;
}