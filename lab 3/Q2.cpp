#include <bits/stdc++.h>
using namespace std;

class Array2D
{

public:
    int rows, columns;
    int **p_array;

    vector<tuple<int, int, int>> A;
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
        return A.size();
    }

    int numCols()
    {
        return 3;
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
    void Spclean(int value)
    {
        for (int i = 0; i < A.size(); i++)
        {
            get<0>(A[i]) = value;
            get<1>(A[i]) = value;
            get<2>(A[i]) = value;
        }
    }

    int getitem(int i1, int i2)
    {
        cout << "at which indexx:";

        if (i2 == 0)
            return get<0>(A[i1]);

        else if (i2 == 1)
            return get<1>(A[i1]);

        else
            return get<2>(A[i1]);
    }

    void setitem(int i1, int i2, int value)
    {
        p_array[i1 - 1][i2 - 1] = value;
    }
    void Smatrix()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (p_array[i][j] != 0)
                {
                    A.push_back(make_tuple(i, j, p_array[i][j]));
                }
            }
        }
    }
    void Prints()
    {
        for (int i = 0; i < A.size(); i++)

            cout << get<0>(A[i]) << " ";
        cout << get<1>(A[i]) << " ";
        cout << get<2>(A[i]) << " ";
    }

    void print()
    {
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
    Array2D obj1(5, 5);
    obj1.clear(0);

    obj1.setitem(2, 2, 1);
    obj1.setitem(1, 2, 5);
    obj1.setitem(7, 24, 14);
    obj1.setitem(6, 4, 16);
    obj1.setitem(7, 7, 18);
    obj1.setitem(8, 5, 25);

    cout << "simple matrix A" << endl;
    obj1.print();

    cout << endl;
    cout << "Sparx matrix of A" << endl;
    obj1.Smatrix();

    obj1.Prints();
    cout << endl;
    cout << obj1.getitem(7, 5);

    cout << "Rows in sparx matrix: " << obj1.numRows() << endl;
    cout << "Column in sparx matrix: " << obj1.numCols() << endl;
    cout << endl;

    cout << "Cleared sparx metrix by that value" << endl;
    obj1.Spclean(3);

    obj1.Prints();

    return 0;
}
