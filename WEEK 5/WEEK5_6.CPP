#include <iostream>
using namespace std;
// addition and multiplication of two matrices: running

int main()
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> rows1 >> cols1;

    int matrix1[rows1][cols1];

    cout << "Enter the elements of first matrix:\n";
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> rows2 >> cols2;

    // checking condition for multiplication
    if (cols1 != rows2)
    {
        cout << "Invalid input! Number of columns of first matrix should be equal to number of rows of second matrix.";
        return 0;
    }

    int matrix2[rows2][cols2];
    cout << "Enter the elements of second matrix:\n";
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    // product logic
    int product[rows1][cols2];

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // printing products
    cout << "The product of both matrices is:\n";
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << product[i][j] << "  ";
        }
        cout << "\n";
    }

    // checking condition for addition
    if (rows1 != rows2 || cols1 != cols2)
    {
        cout << "Sum is not possible, the number of rows and columns of both matrices should be same\n";
        return 0;
    }

    // sum logic
    int sum[rows1][cols1] = {0};
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // printing sum
    cout << "The sum of both matrices is\n";

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        cout << endl;
    }
}
