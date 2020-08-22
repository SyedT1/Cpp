#include<bits/stdc++.h>
using namespace std;
void stitchArray(int *&a, int *b, int s1, int s2) {
    int *p = new int[s1+s2];
    for(int i = 0;i<s1;i++){
      p[i]=a[i];
    }
    for(int i = 0,t=s1;i<s2;i++,t++){
      p[t] = b[i];
    }
    a = p;
}
int main() {
    int N, *A, M, *B;
    cin >> N >> M;
    A = new int[N];
    B = new int[M];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    stitchArray(A, B, N, M);
    for (int i = 0; i < N + M; i++) {
        cout << A[i] << (i<(N+M)-1?' ':'\n');
    }
    for (int i = 0;i < M; i++){
        cout<< B[i] << (i<M-1?' ':'\n');
    }
    return 0;
}
