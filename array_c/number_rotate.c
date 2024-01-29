//    .......n number rotate.........


#include <stdio.h>

int main() 
{
    int n; 
    printf("enter the value:");
    scanf("%d", &n);
    int a[n];
    int i, p;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p);
        a[i] = p;
    }
    
    int k;
    printf("enter the user input k:");
    scanf("%d", &k);
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[(i + k) % n]);
    }
    
    return 0;
}
