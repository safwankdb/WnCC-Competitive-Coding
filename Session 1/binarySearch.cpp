#include<bits/stdc++.h>

using namespace std;

//This function return index of x in arr[] or returns -1 if it doesnt exist
int binarySearch(int arr[], int left, int right, int x)
{
	if(right>=left)
	{
		int mid = left + (right-left)/2;
		if(arr[mid] == x)
			return mid;
		if(arr[mid] < x)
			return binarySearch(arr, mid+1, right, x);
		return binarySearch(arr, left, mid-1, x);
	}
	return -1;
}

int main()
{
	int arr[] = {2, 4, 6, 9, 10, 11, 12, 13, 14, 65, 73, 88};
	int x = 16;
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = binarySearch(arr, 0, n-1, x);
	if(result == -1)
		cout << "Element not found"<<endl;
	else
		cout << "Element found at index " << result << endl;
	return 0;
}