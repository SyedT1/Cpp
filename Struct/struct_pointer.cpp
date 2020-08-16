#include<bits/stdc++.h>
using namespace std;
struct re{
	string x;
	int y;
};
int main(){
	re *bo = new re [4];
	for(int i = 0;i<4;i++){
		cout<<"Enter the name = \n";cin>>bo[i].x;
		cout<<"Enter the age  = \n";cin>>bo[i].y;
	}
	for(int i = 0;i<4;i++){
		cout<<bo[i].x<<"\'s age is "<<bo[i].y<<'\n';
	}
}
