//bubble sort is taking the larger element towards end by using compare function
#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b){
cout<<"comparing"<<a<<"and"<<b<<endl;
return a>b;
}
void bubblesort(int a[],int n, bool (&cmp)(int a, int b)){
for (int it=1;it<=n-1;it++){
    for (int j=0;j<=n-it-1;j++){
if (cmp(a[j],a[j+1])){
    swap (a[j],a[j+1]);
}
}
}}
int main(){
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];}
    bubblesort(a, n, compare);
    for (int i=0;i<n;i++){
        cout<<a[i];
}
return 0;
 }
