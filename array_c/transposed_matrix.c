		//  Transposed matrix.........	

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int p[n][n];

   
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }

  
    printf("Transposed matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", p[j][i]);
        }
        printf("\n"); 
    }

    return 0;
}

		
