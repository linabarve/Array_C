    //continue indexing sum.......... for ex: 1,2,3 = 5 
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int found = 0;  

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += a[j];
            if (sum == k) {
                printf("Indices: ");
                for (int x = i; x <= j; x++) {
                    printf("%d ", x);
                }
                printf("with sum %d\n", k);
                found = 1;  
            }
        }
    }

    if (!found) {
        printf("No such pair found with sum %d\n", k);
    }

    return 0;
}
