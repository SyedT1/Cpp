#include<bits/stdc++.h>
using namespace std;
using LL = long long int;
int main(){
	LL *nm = new LL;
	cin>> *nm;
    *nm = (*nm) * (*nm);
    cout<< *nm <<'\n';
    delete nm;
    return 0;
}
