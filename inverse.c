#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter the no of element");
	scanf("%d", &n);
	int arr[n],k;
	printf("enter the elements of an array");
	for(k=0; k<=n; k++)
	{
		scanf("%d", &arr[k]);
	}
	printf("number of inversions are %d \n", getInvCount(arr, n));
	return 0;
}
int getInvCount(int arr[], int n)
{
	int inv_count=0;
	int i,j;
	for(i=0; i<=n-1; i++)
	for(j=i+1; j<n; j++)
	if(arr[i] > arr[j])
	inv_count++;
	return inv_count;
}


