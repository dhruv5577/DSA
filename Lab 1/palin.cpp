#include <bits/stdc++.h>
using namespace std;

bool ispall(string str, int n)
{
    if (n == str.length() / 2)
        return true;
    if (str[n] == str[str.length() - 1 - n])
        return ispall(str, n + 1);
    return false;
}
int main()
{
    cout << ispall("sars", 0);
    return 0;
}