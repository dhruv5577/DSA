#include <bits/stdc++.h>
using namespace std;

class Array2D
{

public:
    int rows, columns;
    int **p_array;
    Array2D(int nrow, int ncol)
    {
        this->rows = nrow;

        this->columns = ncol;

        p_array = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            p_array[i] = new int[columns];
        }
    }

    int numRows()
    {
        return this->rows;
    }

    int numCols()
    {
        return this->columns;
    }

    void clear(int value)
    {

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                p_array[i][j] = value;
            }
        }
    }

    int getitem(int i1, int i2)
    {
        return p_array[i1 - 1][i2 - 1];
    }

    void setitem(int i1, int i2, int value)
    {

        p_array[i1 - 1][i2 - 1] = value;
    }

    void print()
    {
        cout << "metrixs";

        for (int i = 0; i < rows; i++)
        {

            for (int j = 0; j < columns; j++)
            {
                cout << p_array[i][j] << " ";
            }

            cout << endl;
        }
    }
};

int main()
{
    Array2D obj1(4, 4);

    cout << endl
         << "Rows = " << obj1.numRows() << endl;

    cout << endl
         << "Columns = " << obj1.numCols() << endl;

    obj1.clear(5);

    obj1.setitem(4, 7, 8);
    obj1.setitem(3, 5, 6);
    obj1.setitem(2, 7, 4);
    obj1.print();

    cout << obj1.getitem(6, 3) << endl;

    return 0;
}