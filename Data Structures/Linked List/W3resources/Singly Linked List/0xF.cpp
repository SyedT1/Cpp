#include<iostream>
using namespace std;
class Link{
public:
	char value;
	Link *next = nullptr;
	void ins(Link *&k,char m){
      Link *tm = new Link{m,k};
	  k = tm;
	}
	void dis(Link *k){
		if(k==nullptr){
			return;
		}
		cout<<k->value<<'\n';
		dis(k->next);
	}

};
void leag(Link *&perm,Link *temp,string &p){
	if(temp==nullptr){
		return;
	}
	leag(perm,temp->next,p);
	int similar = (temp->value==perm->value);
	p += to_string(similar);
	perm = perm->next;
}
bool isPalindrome(Link *f){
   string eval = "";
   leag(f,f,eval);
   int fil = 0;
   for(char c:eval){
	  fil+=(c=='1'?1:0);
   }
   return eval.length()==fil;
}
int main(){
   //Check code for verification
   Link *lo = nullptr;
   int n;cout<<"Verify for \n1.{a,e,i,e,a}\n2.{a,e,i,e,x} = ";
   cin>>n;
   string l= (n == 1 ?"aeiea":"aeiex");
   for(int i = 0;l[i];i++){
     lo->ins(lo,l[i]);
   }
   //lo->dis(lo);
   Link *curr = nullptr, *p = lo, *temp = nullptr;
   while(p!=nullptr){
	   curr = p;
	   p = p->next;
	   curr->next = temp;
	   temp = curr;
   }
   lo = temp;
   cout<<isPalindrome(lo)<<char(0x0A);
   return 0;
}
