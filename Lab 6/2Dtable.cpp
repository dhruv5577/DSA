#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v[], int m);

void insert(vector<int> v[], int M, int value)
{
    int home = value % M;

    v[home].push_back(value);
}
bool search(vector<int> v[], int M, int value)

{
    int home = value % M, j = 0;
    for (int i = 0; i < v[home].size(); i++)
    {

        if (v[home][j] == value)
            return true;
        j++;
    }
    return false;
}
void print(vector<int> v[], int M)
{
    for (int i = 0; i < M; i++)
    {
        if (v[i].size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
}
void constrain(vector<int> v[], int M, int value)
{
    if (search(v, M, value))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
}
int main()
{
    int M = 10;

    vector<int> arr[10];

    vector<int> v1 = {133, 88, 92, 221, 174, 43, 11, 1008, 444, 100, 540, 120};
    for (int i = 0; i < v1.size(); i++)
        insert(arr, M, v1[i]);

    print(arr, M);
    constrain(arr, M, 1008);
    constrain(arr, M, 108);
}