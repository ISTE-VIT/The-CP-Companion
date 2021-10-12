// C++ program to find number of bins required using
// First Fit algorithm.
#include <bits/stdc++.h>
using namespace std;

int firstFit(int weight[], int n, int c)
{
	
	int res = 0;

	int bin_rem[n];

	for (int i = 0; i < n; i++) {

		int j;
		for (j = 0; j < res; j++) {
			if (bin_rem[j] >= weight[i]) {
				bin_rem[j] = bin_rem[j] - weight[i];
			
				break;
			}
		}

		if (j == res) {
			bin_rem[res] = c - weight[i];
			res++;
		}
	
	}
	return res;
}
int main()
{
	int weight[] = { 2, 5, 4, 7, 1, 3, 8 };
	int c = 10;
	int n = sizeof(weight) / sizeof(weight[0]);
	cout << "Number of bins required in First Fit : "
		<< firstFit(weight, n, c);
	return 0;
}
