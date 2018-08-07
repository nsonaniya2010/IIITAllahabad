#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n;
	cin>>n;
	long int arr1[n],arr2[n];
	//array1
	for(long int i = 0;i<n;i++){
		cin>>arr1[i];
	}
	//array2
	for(long int i = 0;i<n;i++){
		cin>>arr2[i];
	}
	//sortig both arrays
	sort(arr1,arr1+n);
	sort(arr2,arr2+n);
	//merge sort into one arr1 and arr2
	long int i=0,j=0,k=0, arr3[2*n];
	while(i<n && j<n){
		if(arr1[i]<arr2[j])
			arr3[k++]= arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}
	while(i<n)
		arr3[k++] = arr1[i++];
	while(j<n)
		arr3[k++] = arr2[j++];

	long long int sum = 0;
	//doing sum.
	for(long int x = 0;i<2*n;i++){
		sum+=arr3[x]*x;
	}

	cout<<sum<<endl;

return 0;}
