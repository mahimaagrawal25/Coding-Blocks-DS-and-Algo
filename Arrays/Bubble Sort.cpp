//bubble sort is taking the larger element towards end
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[];
for (int i=0;i<n;i++){
    cin>>a[i];}
for (int i=0;i<n;i++){
if (a[i]>a[i+1]){
    swap (a[i],a[i+1]);
}else{
continue;
}
}
for (int i=0;i<n;i++){
    cout<<a[i];}
return 0;
 }

