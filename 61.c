
#include <bits/stdc++.h>
using namespace std;


void print_primes_till_N(int N)
{
	
	int i, j, flag;

	
	cout << "\nPrime numbers between 1 and "
		<< N << " are:\n";

	
	for (i = 1; i <= N; i++) {

		
		if (i == 1 || i == 0)
			continue;

		flag = 1;

		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}

		
		if (flag == 1)
			cout << i << " ";
	}
}


int main()
{

	int N;
	scanf("%d",&N);

	print_primes_till_N(N);

	return 0;
}
