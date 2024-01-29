			// inserting........... 
#include <stdio.h>

int main() {
    int n = 5;
    int a[5] = {10, 20, 30, 50, 60}; 
    int k, t, i;

    printf("Enter the position you want to insert: ");
    scanf("%d", &k);

    if (k < 0 || k > n)
    {
        printf("Invalid position\n");
    }

    printf("Enter the value to be inserted: ");
    scanf("%d", &t);
    for (i = n; i >= k; i--)
    {
        a[i] = a[i - 1];
    }

    a[k - 1] = t;

    n++; 

    printf("Updated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


/*

#include<stdio.h>
int main()
{
	char a[] = "lina  raju barve\0";
	int  i = 0;
	while(a[i] != '\0')
	{
	printf("%c",a[i]);
	i++;
	}
	return 0;
}
	
*/	
