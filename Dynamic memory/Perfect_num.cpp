#include<bits/stdc++.h>
using namespace std;
int passperfect(int x) {
	int div = 0; for (int i = 1; i < x; i++) if (x % i == 0) div += i;
	return div == x;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int *p = NULL, q = 0, n; cin >> n;
	for (int i = 1; i <= n; i++) {
		if (passperfect(i)) {
			q++;
			if (p == NULL) {
				p = (int *)malloc(sizeof(int));
			} else {
				p = (int *)realloc(p, q * sizeof(int));
			}
			p[q - 1] = i;
		}
	}
	for (int i = 0; i < q; i++) {
		cout << p[i] << (i < q - 1 ? ' ' : '\n');
	}
	delete p;
}
