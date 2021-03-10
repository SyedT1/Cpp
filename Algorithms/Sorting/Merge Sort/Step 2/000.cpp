#include<iostream>
using namespace std;
void __procs(int __a[],int l,int mid,int r){
  int n1 = mid-l+1,n2 = r-mid;
  int L[n1],R[n2];
  for(int i = 0;i<n1;i++){
     L[i]=__a[i+l];
  }
  for(int j = 0;j<n2;j++){
     R[j]=__a[mid+1+j];
  }
  int i = 0,j = 0,k = l;
  while(i<n1 && j<n2){
     if(L[i]<=R[j]){
        __a[k++] = L[i++];
     }else{
        __a[k++] = R[j++];
     }
  }
  while(i<n1){
     __a[k++]=L[i++];
  }
  while(j<n2){
     __a[k++]=R[j++];
  }
}
void __merge(int __a[],int l,int r){
   if(l<r){
      int mid = (l+r)/2;
      __merge(__a,l,mid);
      __merge(__a,mid+1,r);
      __procs(__a,l,mid,r);
   }
   return;
}
int main(){
   int __a[]={5,4,3,2,1,-1,-2,-3};
   __merge(__a,0,sizeof(__a)/sizeof(int));
   for(int i:__a){
      cout<<i<<' ';
   }
}
