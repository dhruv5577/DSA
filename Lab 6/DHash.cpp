#include <bits/stdc++.h>
using namespace std;

int a = 17;
int b = 11;

class DoubleHash
{
    int *hashTable;
    int curr_size;

public:
    bool isFull()
    {

        return (curr_size == a);
    }

    int hash1(int key)
    {
        return (key % a);
    }

    int hash2(int key)
    {
        return (b - (key % b));
    }

    DoubleHash()
    {
        hashTable = new int[a];
        curr_size = 0;
        for (int i = 0; i < a; i++)
            hashTable[i] = -1;
    }

    void insertHash(int key)
    {

        if (isFull())
            return;

        int index = hash1(key);

        if (hashTable[index] != -1)
        {
            int index2 = hash2(key);
            int i = 1;
            while (1)
            {

                int newIndex = (index + i * index2) %
                               a;

                if (hashTable[newIndex] == -1)
                {
                    hashTable[newIndex] = key;
                    break;
                }
                i++;
            }
        }

        else
            hashTable[index] = key;
        curr_size++;
    }

    void displayHash()
    {
        for (int i = 0; i < a; i++)
        {
            if (hashTable[i] != -1)
                cout << i << " --> "
                     << hashTable[i] << endl;
            else
                cout << i << endl;
        }
    }
};

int main()
{
    int a[] = {133, 88, 92, 221, 174, 100, 134, 174};
    int n = sizeof(a) / sizeof(a[0]);

    DoubleHash h;
    for (int i = 0; i < n; i++)
        h.insertHash(a[i]);

    h.displayHash();
    return 0;
}