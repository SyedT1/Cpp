#include<bits/stdc++.h>
#include<fstream>
using namespace std;
struct Link{
    int index;
    Link *next = nullptr;
};
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	Link *s = new Link,*start;
	start = s;
	for(int i = 0;i<3;i++){
         if(i){
         	s->next = new Link;
         	s = s->next;
         }
         cin>>s->index;
	}
	cout<<start->index<<'\n';
	cout<<start->next->index - start->index<<'\n';
}
