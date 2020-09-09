#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("output.txt", "w", stdout);
    queue<int>q;
    for (int i = 0; i < 4; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
}
