	//output :- 5,3,9,0,0

#include <stdio.h>

int main() {
    int i, j, temp;
    int a[5] = {5, 0, 3, 0, 9};
    
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = i; j < 5 - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
           
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}




	

	
	
