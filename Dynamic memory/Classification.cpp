#include<bits/stdc++.h>
using namespace std;
using ul = unsigned long long int;
int main() {
	//freopen("input.txt", "r", stdin);
	freopen("pol.txt", "w", stdout);
	int *p, x = 4;
	// type *malloc(num*sizeof(type))
	p = (int *)malloc(x * sizeof(int));
	for (int i = 0; i < 4; i++) {
		p[i] = i + 1;
	}
	for (int i = 0; i < 4; i++) {
		cout << p[i] << (i < 3 ? ' ' : '\n');
	}
	free(p);
	// type *calloc(num,size_t)
	p = (int *)calloc(x, sizeof(int));
	for (int i = 0; i < 4; i++) {
		p[i] = i + 1;
	}
	for (int i = 0; i < 4; i++) {
		cout << p[i] << (i < 3 ? ' ' : '\n');
	}
	//type *realloc(P,num*size_t) P = pointer(*)
	p = (int *)realloc(p, 2 * 4 * sizeof(int));
	for (int i = 0; i < 8; i++) {
		cout << p[i] << (i < 7 ? ' ' : '\n');
	}
	free(p);
}
