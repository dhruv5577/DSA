#include <bits/stdc++.h>
using namespace std;
string rev1(string str)
{
    if (str.length() <= 1)
        return str;
    return rev1(str.substr(1)) + str[0];
}

void rev2(string str, int n)
{
    if (n == str.length())
        return;
    rev2(str, n + 1);
    cout << str[n];
}

int main()
{

    string str = "DHRUV";
    rev2(str, 0);
    cout << str.substr(1);
}
