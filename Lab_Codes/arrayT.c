#include <stdio.h>

int main()
{
    int rows1, cols1;

    printf("Enter number of rows for the original array (>0): ");
    scanf("%d", &rows1);
    printf("Enter number of columns for the original array (>0): ");
    scanf("%d", &cols1);

    int arr[rows1][cols1];
    int arrT[cols1][rows1];

    // input elements for the original array
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter integer element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // transpose the array
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            arrT[j][i] = arr[i][j];
        }
    }

    // print the transposed array
    for (int i = 0; i < cols1; i++) {
        for (int j = 0; j < rows1; j++) {
            printf("%d ", arrT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
