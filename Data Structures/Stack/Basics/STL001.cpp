#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("output.txt", "w", stdout);
	stack<int>take;
	for (int i = 0; i < 4; i++) {
		take.push(i);
	}
	for (; (int)take.size(); take.pop()) {
		cout << take.top() << '\n';
	}
	return 0;
}
