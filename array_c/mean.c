		//   ........mean.......
#include<stdio.h>
int main()
{
	int i,p,n, s= 0;
	float avg;
	printf("enter the value:");
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n; i++)
	{
		scanf("%d",&p);
		a[i] = p;
		s = s + p;
	}

	avg = (float) s/n;
	printf("Display average:%f",avg);
	return 0;
}

