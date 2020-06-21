#include<bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int n){
for(int i=1;i<n;i++){
  int e=a[i];
  int j=i-1;
  while (j>=0 and a[j]>e){
  a[j+1]=a[j];
  j=j-1;}
a[j+1]=e;}
}

int main(){
  int a[1000];
  int n,key;
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>a[i];
  }
  insertionsort(a,n);
  for (int i=0;i<n;i++){
    cout<<a[i];
  }
return 0;}
