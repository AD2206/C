//Using multidimensional arrays,we will be carrying out matrix multiplication 
#include<stdio.h>
int main() {
    int i;int j;int row;int column;
    int matrix1[10][10]; int matrix2[10][10]; int product[10][10];


    printf("Enter the number of rows :");
    scanf("%d",&row);
    printf("Enter the number of columns :");
    scanf("%d",&column);
    printf("Enter the elements of the first matrix \n ");
    for (i=0;i<row;i++) {
        for (j=0;j<column;j++) {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d",&matrix1[i][j]);


        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i=0;i<row;i++) {
        for (j=0;j<column;j++) {
            printf("matrix2[%d][%d]",i,j) ;
            scanf("%d",&matrix2[i][j]);

        }
    }
    for (i=0;i<row;i++) {
        for (j=0;j<column;j++) {
            product[i][j] = matrix1[i][j] * matrix2[i][j];



        }
    }
    printf("Product of the two matrices:\n");
    for (i=0;i<row;i++) {

        for (j=0;j<column;j++) {
            printf("%d\t",product[i][j]);


        }
        printf("\n");
    }

    return 0;

