
		// deleting array element............. 

#include <stdio.h>

int main() {
    int k, j;
    printf("Enter the index of the element you want to delete: ");
    scanf("%d", &k);
    int a[5] = {10, 20, 30, 40, 50};

    if (k < 0 || k >= 5) {
        printf("Invalid index. Element cannot be deleted.\n");
    } else {
        for (j = k; j < 4; j++) {
            a[j] = a[j + 1];
        }

        printf("Updated array:\n");
        for (j = 0; j < 4; j++) {
            printf("%d ", a[j]);
        }
        printf("\n");
    }

    return 0;
}

