#include <stdio.h>

int main()
{
    int rows1, cols1, rows2, cols2;

    printf("Enter number of rows for the first array (>0): ");
    scanf("%d", &rows1);
    printf("Enter number of columns for the first array (>0): ");
    scanf("%d", &cols1);

    int arr1[rows1][cols1];

    printf("Enter number of rows for the second array (>0): ");
    scanf("%d", &rows2);
    printf("Enter number of columns for the second array (>0): ");
    scanf("%d", &cols2);

    int arr2[rows2][cols2]; 

    if (rows1 != rows2 || cols1 != cols2) {
        printf("The sizes of the arrays are not similar. Cannot add them.\n");
        return 1;
    }

    else
    {
        // input elements for first array
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols1; j++) {
                printf("Enter integer element [%d][%d]: ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }
        
        printf("For second array: ");

        // input elements for second array
        for (int i = 0; i < rows2; i++) {
            for (int j = 0; j < cols2; j++) {
                printf("Enter integer element [%d][%d]: ", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }

        int sum[rows1][cols1]; 

        // to add the elements
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols1; j++) {
                sum[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        // to print the sum array
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols1; j++) {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
