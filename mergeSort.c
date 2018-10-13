#include<stdio.h>
#include<math.h>

void merge(int *a, int low, int mid, int high)
{
	int l1 = mid-low+1;
	int l2 = high-mid;
	int L[l1],R[l2];

	for(int i =0; i<l1;i++)
	{
		L[i] = a[low+i];
	}

	for(int i =0; i<l2; i++)
	{
		R[i] = a[mid+i+1];
	}

	int i =0;
	int j =0;
	int k = low;

	while(i<l1 && j<l2)
	{
		if(L[i]<=R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}

	while(i<l1)
	{
		a[k] = L[i];
		i++;
		k++;
	}

	while(j<l2)
	{
		a[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(int *a, int low, int high)
{
	if(low<high)
	{
		int mid = floor((low+high)/2);

		merge_sort(a, low, mid);
		merge_sort(a, mid+1, high);
		merge(a,low, mid, high);
	}
}


int main()
{
	int l;
	printf("Enter the number of elements\n");
	scanf("%d", &l);
	int a[l];

	for(int i = 0; i<l;i++)
	{
		scanf("%d", &a[i]);
	}

	merge_sort(a,0,l-1);

	for(int i = 0; i<l;i++)
	{
		printf("%d", a[i]);
	}
}
