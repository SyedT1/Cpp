#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,*p;
 char *c;
 cin>>n;
 p = &n;
 cout<<"Address in pointer(int) = "<<p<<" and of n is "<<&n<<" which is similar "<<endl;
 c = (char*)p; //typecasting
 cout<<(int*)c<<" address in pointer(char) and the value stored is "<<(int)*c<<endl;
 /*
  we all know that,
  1 byte = 8 bits  memory for character
  4 bytes = 4*8 = 32 bits memory for integer
  char stores 1 byte of memory. integer stores 4 bytes of memory
  now if I take 1025 as input. then integer stores it in 4 bytes of memory
  as follows 00000000 00000000 00000100 00000001
               1 byte + 1 byte + 1 byte + 1 byte = 4 bytes of memory for integer
  now that i have stored integer address to pointer via typecasting
  it initially points to first 1 byte of memory
  which is 00000001 equal to 1 which comes from (int)*c

 */
 cout<<(int*)(c+1)<<" is the address of the char pointer whose values is = "<<(int)*(c+1)<<endl;
 /*
   again we see something different. the memory address points to the 2nd chuck of byte of the integer pointer
   which is equal to 4 because during typing casting we have added 1 to
   the char pointer as (int)*(c+1)
 */
 
 return 0;
}
