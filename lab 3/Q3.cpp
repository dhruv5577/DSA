#include <bits/stdc++.h>

using namespace std;
class matrix
{
public:
  int row, column;
  vector<tuple<int, int, int>> v;
  matrix(int r, int c)
  {
    this->row = r;
    this->column = c;
  }

  int numRows()
  {
    return this->row;
  }

  int numCols()
  {
    return this->column;
  }

  void setitem(int r, int c, int scalar)
  {
    if (scalar != 0)
    {
      v.push_back(make_tuple(r, c, scalar));
    }
  }
  int getitem(int i1, int i2)
  {
    cout << " index:";
    if (i2 == 0)
      return get<0>(v[i1]);

    else if (i2 == 1)
      return get<1>(v[i1]);

    else
      return get<2>(v[i1]);
  }

  void PrintSp()
  {
    cout << "Sparx Matrix" << endl;
    for (int i = 0; i < v.size(); i++)
      cout << get<0>(v[i]) << " "
           << get<1>(v[i]) << " "
           << get<2>(v[i]) << "/n";
  }

  void scalby(int value)
  {
    for (int i = 0; i < v.size(); i++)
    {
      get<2>(v[i]) *= value;
    }
  }

  void transpose()
  {
    int m1[3][v.size()];

    for (int i = 0; i < v.size(); i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if (j == 0)
          m1[j][i] = get<0>(v[i]);
        else if (j == 1)
          m1[j][i] = get<1>(v[i]);
        else
          m1[j][i] = get<2>(v[i]);
      }
    }
    cout << "\ntraspose of sparce matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < v.size(); j++)
      {
        cout << m1[i][j] << " ";
      }
      cout << endl;
    }
  }

  void add(int mat[3][3])
  {
    int m1[3][v.size()];
    for (int i = 0; i < v.size(); i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if (j == 0)
          m1[i][j] = mat[i][j] + get<0>(v[i]);
        else if (j == 1)
          m1[i][j] = mat[i][j] + get<1>(v[i]);
        else
          m1[i][j] = mat[i][j] + get<2>(v[i]);
      }
    }
    cout << "Sparce matrix after addition" << endl;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < v.size(); j++)
      {
        cout << m1[i][j] << " ";
      }
      cout << endl;
    }
  }

  void subtract(int mat[3][3])
  {
    int m1[3][v.size()];
    for (int i = 0; i < v.size(); i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if (j == 0)
          m1[i][j] = get<0>(v[i]) - mat[i][j];
        else if (j == 1)
          m1[i][j] = get<1>(v[i]) - mat[i][j];
        else
          m1[i][j] = get<2>(v[i]) - mat[i][j];
      }
    }
    cout << "Sparce matrix after Subtraction" << endl;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < v.size(); j++)
      {
        cout << m1[i][j] << " ";
      }
      cout << endl;
    }
  }
  void multiply(int mat[3][3])
  {
    cout << "\n new sparx matrix" << endl;
    int m1[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {

      for (int j = 0; j < 3; j++)
      {

        for (int k = 0; k < 3; k++)
        {
          if (k == 0)
            m1[i][j] += get<0>(v[i]) * mat[k][j];
          else if (k == 1)
            m1[i][j] += get<1>(v[i]) * mat[k][j];
          else
            m1[i][j] += get<2>(v[i]) * mat[k][j];
        }
        cout << m1[i][j] << " ";
      }

      cout << endl;
    }
  }
};

int main()
{
  matrix a1(4, 3);
  int temp[3][3] = {{2, 0, 4}, {8, 5, 0}, {0, 2, 8}};
  a1.setitem(6, 8, 2);
  a1.setitem(4, 8, 2);
  a1.setitem(5, 7, 8);
  a1.PrintSp();
  cout << endl;

  a1.add(temp);
  a1.multiply(temp);

  return 0;
}