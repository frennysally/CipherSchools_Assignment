#include <bits/stdc++.h>
using namespace std;

// Function for finding first and last occurrence
// of an elements
void findFirstAndLast(int arr[], int n, int x)
{
	int first = -1, last = -1;
	for (int i = 0; i < n; i++) {
		if (x != arr[i])
			continue;
		if (first == -1)
			first = i;
		last = i;
	}
	if (first != -1)
		cout << "First Occurrence = " << first
			<< "\nLast Occurrence = " << last;
	else
		cout << "Not Found";
}

// Driver code
int main()
{
	int arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 };
	int n = sizeof(arr) / sizeof(int);
	int x = 7;
	findFirstAndLast(arr, n, x);
	return 0;
}
