#include<bits/stdc++.h>
#define r(i) i=-1
#define stops cout<<"\b \n";
using namespace std;
int main(){
 int row,col;
 cout<<"Enter the number of rows = ";
 cin>>row;
 cout<<"Enter the number of columns = ";
 cin>>col;
 int arr[row][col],i=-1,j=-1;
 while(++i<row){
   r(j);
   while(++j<col)
        cin>>arr[i][j];
 }
 r(i);
 int *p[row];
 while(++i<row)
    p[i]=&arr[i][0];


 r(i);
 while(++i<row){
  r(j);
  while(++j<col)
    cout<<*(p[i]+j)<<",";

  stops;
 }
 return 0;
}
