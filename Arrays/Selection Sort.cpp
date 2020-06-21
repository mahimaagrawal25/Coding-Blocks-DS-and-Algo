#include <bits/stdc++.h>
using namespace std;
//selection sort is arrange them in ascending order
void selectionsort(int a[], int n){
for (int i=0;i<n-1;i++){
int min_index=i;
for (int j=i;j<n;j++){
if (a[j]<a[min_index]){
min_index=j;}
}
swap(a[i],a[min_index]);}}
int main(){
int n,key;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
cin>>a[i];}


selectionsort(a,n);
for (int i=0;i<n;i++){
cout<<a[i];}

return 0;
}
