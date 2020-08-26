#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int a; cin >> a;
	int **p = nullptr, k = 0, *q = (int *)calloc(a, sizeof(int));
	for (int i = 0; i < a ; i++) {
		for (int j = 1, fj = i + 1; j <= fj; j++) {
			if (fj % j == 0) {
				q[i]++;
			}
		}
		if (p == nullptr) {
			p = (int **)malloc(sizeof(int *));
		} else {
			p = (int **)realloc(p, (i + 1) * sizeof(int));
		}
		p[i] = (int *)malloc(q[i] * sizeof(int));
		for (int s = 1, fs = i + 1, t = 0; s <= fs; s++) {
			if (fs % s == 0) {
				p[i][t++] = s;
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
