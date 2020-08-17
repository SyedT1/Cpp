#include<bits/stdc++.h>
using namespace std;
void readline(char *&p){
    p = new char [100];
    cin.getline(p,100);
}
void count_words(char *p,int *numofwords){
	stringstream iterate(p);
	for(*numofwords = 0;iterate>>p;(*numofwords)++);
}
int main(){
	int numofw = 0;
	char *c = nullptr;
	readline(c);
	count_words(c,&numofw);
	cout<<"The total number of words in the input = "<<numofw<<'\n';
	return 0;
}
