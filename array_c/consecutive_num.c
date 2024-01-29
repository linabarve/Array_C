		// consecutive num count..........

#include <stdio.h>

int main() {
    int i;
    int a[10] = {1, 2, 3, 4, 1, 1, 1, 6, 1, 1}; 

    int count = 0;

    for (i = 0; i < 10; i++) {
        if (a[i] == a[i - 1] )
        {
            count++;
        }
    }

    printf("Number of consecutive: %d\n",count);

    return 0;
}



		//  consecutive num print.........      
	
#include<stdio.h>
int main()
{
	int i,j;
	int a[8] = { 1,3,2,1,4,1,2,6};
	for(i = 0; i < 8; i++)
	{
		for(j = i  + 1; j < 8; j++)
		{
			if(a[i] == a[j])
			{
			
			printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}
			

		
			
			
			
			
			
