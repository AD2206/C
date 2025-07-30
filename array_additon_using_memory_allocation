
   
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, y, n, x;

    printf("Enter the number of arrays: ");
    scanf("%d", &x);

    printf("Enter the size of each array: ");
    scanf("%d", &n);


    int **arrays = (int **)malloc(x * sizeof(int *));
    int *sum = (int *)calloc(n, sizeof(int));

    if (arrays == NULL || sum == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }


    for (i = 0; i < x; i++) {
        arrays[i] = (int *)malloc(n * sizeof(int));
        if (arrays[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter %d elements for array %d:\n", n, i + 1);
        for (y = 0; y < n; y++) {
            scanf("%d", &arrays[i][y]);
            sum[y] += arrays[i][y];
        }
    }


    printf("\nSum of all arrays:\n");
    for (y = 0; y < n; y++) {
        printf("%d ", sum[y]);
    }


    for (i = 0; i < x; i++) {
        free(arrays[i]);
    }
    free(arrays);
    free(sum);

    return 0;
}
