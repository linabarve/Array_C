                 //  marge array................

#include<stdio.h>

int main() {
    int i, j, k = 0;
    int a[4] = {1, 2, 3, 4};
    int b[4] = {2, 6,5, 4};
    int c[8]; 

    i = j = 0; 

    
    while (i < 4 && j < 4) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
 
    while (i < 4) {
        c[k++] = a[i++];
    }
    while (j < 4) {
        c[k++] = b[j++];
    }

  
    for (int l = 0; l < 8; l++) {
        printf("%d ", c[l]);
    }

    return 0;
}
