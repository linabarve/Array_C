
				// mean, mode, median.............
#include<stdio.h>
int main()
{
	int i, s= 0;
	float avg;
	int a[5] =  {1,2,3,4,5};
	for(i = 0; i < 5; i++)
	{
		s = s + a[i];
	}

	avg = (float) s/5;
	printf("Display average:%f",avg);
	return 0;
}
	
			// mode...........
#include<stdio.h>
int main()
{
	int i,j;
	int a[5] = {1,2,3,4,2};
	for(i = 0; i < 5; i++)
	{
		for(j = i + 1; j < 5; j++)
		{
			if(a[i] == a[j])
			{
				printf("%d\n",a[i]);
			}
		}
		
	}
	return 0;
}



 					// median.............
#include<stdio.h>
int main()
{
	int i,j,m,k;
	int a[5] = {1,2,3,4,5};
	if(5 % 2 == 0)
	{
		k =  5 / 2;
		m = a[k] + a[k-1];
	}
	{
		m =  5  / 2;
	}
	printf("%d\n",m);
	return 0;
}

