#include <bits/stdc++.h>
using namespace std;

void second();

void third();

void fourth();

void first()
{
    second();
    cout << "I am the First" << endl;
}
void second()
{

    third();
    cout << "I am the Second" << endl;
}
void third()
{

    fourth();
    cout << "I am the Third" << endl;
}
void fourth()
{

    cout << "I am the Fourth" << endl;
    int main();
}

int main()
{
    first();
}
