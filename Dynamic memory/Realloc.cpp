#include<bits/stdc++.h>
using namespace std;
using ul = unsigned long long int;
int main() {
	//freopen("input.txt", "r", stdin);
	freopen("pol.txt", "w", stdout);
	int x = 0, *p;
	for (int i = 1; i <= 10; i++) {
		if (10 % i == 0) {
			p = (int *)realloc(p, (++x) * sizeof(int));
			p[x - 1] = i;
		}
	}
	for (int i = 0; i < x; i++)cout << p[i] << ' ';
	free(p);
}
