/* Write a Program of Two 1D Matrix Addition using Operator Overloading */

#include <iostream>
using namespace std;

class Matrix
{
    int a[5][5];

public:
    void accept();
    void display();
    void operator+(Matrix x);
};
void Matrix::accept()
{
    cout << "\n Enter Matrix Element (5 X 5) : \n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << " ";
            cin >> a[i][j];
        }
    }
}
void Matrix::display()
{
    for (int i = 0; i < 5; i++)
    {
        cout << " ";
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}
void Matrix::operator+(Matrix x)
{
    int mat[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mat[i][j] = a[i][j] + x.a[i][j];
        }
    }
    cout << "\n Addition of Matrix : \n\n";
    for (int i = 0; i < 5; i++)
    {
        cout << " ";
        for (int j = 0; j < 5; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    Matrix m, n;
    m.accept(); // Accepting Rows
    n.accept(); // Accepting Columns
    cout << "\n First Matrix : \n\n";
    m.display(); // Displaying First Matrix
    cout << "\n Second Matrix : \n\n";
    n.display(); // Displaying Second Matrix
    m + n;       // Addition of Two Matrices. Overloaded '+' Operator
    return 0;
}