#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a; cin >> a;
	int **p = NULL, k = 0, *q = (int *)calloc(a, sizeof(int));
	for (int i = 0; i < a ; i++) {
		if (p == NULL) {
			p = (int **)malloc(sizeof(int *));
		} else {
			p = (int **)realloc(p, (i + 1) * sizeof(int));
		}
		for (int j = 1, fj = i + 1, t = 0; j <= fj; j++) {
			if (fj % j == 0) {
				q[i]++;
				if (q[i] == 1) {
					p[i] = (int *)malloc(sizeof(int));
				} else {
					p[i] = (int *)realloc(*(p + i), q[i] * sizeof(int));
				}
				p[i][q[i] - 1] = j;
			}
		}
	}
	for (int i = 0; i < a ; i++) {
		printf("Divisors of %d \n", i + 1);
		for (int j = 0; j < q[i]; j++) {
			printf("Divisor[%d] = %d\n", j + 1, p[i][j]);
		}
		cout << string(2, '\n');
	}
}
