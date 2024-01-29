	// Program for array  rotation by k positions........	
		 

#include <stdio.h>

int main() {
    int n,i,j,k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    
    int temp;
    for (i = 0; i < k; i++)
    {
        temp = a[i]; 
        for (j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];  
        }
        a[n - 1] = temp;  
    }

    for (j = 0; j < n; j++) 
    {
        printf("%d ", a[j]);
    }
    return 0;
}
