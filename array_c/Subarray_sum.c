
		
		//  7 + 5 = 12...............
#include <stdio.h>

int main() {
    int i, j, s = 0;
    int k = 18;
    int a[5] = {3, 6, 7, 5, 10};

    for (i = 0; i < 5; i++) {
        s = 0;
        for (j = i; j < 5; j++) {
            s = s + a[j];
        }
        if (k == s) {
            printf("Subarray with sum %d found: ", k);
            for (j = i; j < 5; j++) {
                printf("%d ", a[j]);
            }
            printf("\n");
        }
    }
    return 0;
}





