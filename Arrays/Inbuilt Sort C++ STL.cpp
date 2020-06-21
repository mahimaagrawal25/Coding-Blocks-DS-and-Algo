#include<bits/stdc++.h>
using namespace std;
//using comparator function for decreasing order
bool comparedec(int a, int b){
return a>b;
}
/* bool compareinc(int a, int b){
return a<b;
}*/
int main(){
  int a[1000],b[1000];
  int n;
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>a[i];
  }

  //sorting is done using sort function containing first element as starting index and second element as starting element+length of array
  sort(a,a+n,comparedec);

for (int i=0;i<n;i++){
    cout<<a[i];
  }

return 0;}
