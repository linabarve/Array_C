// .........median..........	
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	int a[n],med;
	int i,j,m,k,p;
	for(i =  0;  i < n; i++)
	{
		scanf("%d",&p);
		a[i] = p;
	}

	if(n % 2 == 0)
	{
		k =  n / 2;
		m = a[k] + a[k-1];
	    med = m / 2;
	    printf("%d",med);
	}
	else
	{
		m =  n  / 2;
		med = a[m];
		printf("Display the mod:%d",med);
	}
	return 0;
}
	
