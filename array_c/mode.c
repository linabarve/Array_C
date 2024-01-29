		// .........n numbers mode........

#include<stdio.h>

int main()
{
    int i, j, n, p,max=0,mode;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++) 
    {
        scanf("%d", &p);
        a[i] = p;
    }
	for (int i=0; i<n; i++)
	{
		int c=1;
		for(j = i+1; j < n ; j++) 
		{
		    if(a[i] == a[j])
		    {
		        c = c + 1;
		    }
		    if(c >=max)
		    {
		    	max=c;
		    	mode=a[i];
		    }
		}    
    }
    printf("%d",mode);
    return 0;
}
	

	
