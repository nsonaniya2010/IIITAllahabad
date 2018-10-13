#include<stdio.h>


void in_sort(int *a, int l )
{
	for(int i=1;i<l;i++)
	{
		int temp = a[i];
		int hole = i;

		while(hole>0 && temp<a[hole-1])
		{
			a[hole] = a[hole-1];
			hole = hole -1 ;
		}
		a[hole] = temp;
	}
}


void main()
{
	int a[] = {1,2,3,9,7,1,3,9,3,1,1,0,5};

	int l = sizeof(a)/sizeof(a[0]);

	in_sort(a,l);

	for(int i =0; i<l; i++)
	{
		printf("%d", a[i]);
	}
}
