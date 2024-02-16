#include <stdio.h>
// product of two matrices
int main()
{
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    int matrix1[rows1][cols1];

    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // checking condition for multiplication
    if (cols1 != rows2)
    {
        printf("Invalid input! Number of columns of first matrix should be equal to number of rows of second matrix.");
        return 0;
    }

    int matrix2[rows2][cols2];

    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
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
    printf("The product of two matrices is:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}