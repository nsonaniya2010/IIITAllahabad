#include<stdio.h>

void swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void sel_sort(int *a, int n)
{
	for(int i =0; i<n; i++)
	{
		int min = i;
		for(int j = i+1; j<n;j++)
		{
			if(a[min]>a[j])
			{
				min = j;
			}
		}
		swap(&a[i], &a[min]);
	}
}



int main()
{
	int n;
	printf("Enter the number of elements:\n");
	scanf("%d", &n);
	int a[n];

	for(int i =0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}

	sel_sort(a,n);

	for(int i =0; i <n; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}
