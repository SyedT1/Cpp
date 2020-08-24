#include<bits/stdc++.h>
using namespace std;
using ul = unsigned long long int;
int main() {
	//freopen("input.txt", "r", stdin);
	freopen("pol.txt", "w", stdout);
	int **p = (int **)malloc(11 * sizeof(int *)), *q = (int *)calloc(11, sizeof(int));
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				q[i]++;
				p[i] = (int *)realloc(*(p + i), q[i] * sizeof(int));
				p[i][q[i] - 1] = j;
			}
		}
	}
	for (int i = 1; i <= 10; i++) {
		cout << "Divisors of " << i << " is = ";
		for (int j = 0; j < q[i]; j++) {
			cout << p[i][j] << ' ';
		}
		cout << '\n';
	}
}
