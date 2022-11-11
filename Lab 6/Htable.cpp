#include <bits/stdc++.h>

using namespace std;

void insert(int a1[], int a2[], int M, int p, int value)
{
    int i = 0, h1 = value % M, h2 = value % p;

    a1[h1] = 1, a2[h2] = 1;
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)

        cout << a[i] << " ";
    cout << endl;
}

bool search(int a1[], int a2[], int M, int p, int value)
{
    if (a1[value % M] == 1 && a2[value % p] == 1)
        return true;

    return false;
}

void constrain(int a1[], int a2[], int M, int p, int value)
{
    if (search(a1, a2, M, p, value))

        cout << "True" << endl;
    else
        cout << "False" << endl;
}
int main()
{
    int M = 17, p = 37;
    int arr1[M] = {0}, arr2[p] = {0};

    vector<int> v = {133, 88, 92, 221, 174};

    for (int i = 0; i < v.size(); i++)
        insert(arr1, arr2, M, p, v[i]);
    print(arr1, M);
    print(arr2, p);
    constrain(arr1, arr2, M, p, 100);
    constrain(arr1, arr2, M, p, 133);
    constrain(arr1, arr2, M, p, 174);
}