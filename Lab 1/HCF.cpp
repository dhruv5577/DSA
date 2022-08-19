#include <bits/stdc++.h>
using namespace std;

int hcf(int a, int b)
{

    if (a == 0)
    {

        return b;
    }
    return hcf(b % a, a);
}

int main()
{
    cout << hcf(6, 9);
    return 0;
}