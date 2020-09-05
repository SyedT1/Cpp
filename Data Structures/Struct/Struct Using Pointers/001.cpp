#include<bits/stdc++.h>
using namespace std;
struct nom {
	int m;
	string n;
};
int main() {
	freopen("input.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	nom *f = new nom;
	cin >> f->m >> f->n;
	cout << f->m << ' ' << f->n;
}
