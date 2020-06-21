//Kadane's algorithm
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cs=0;
    int ms=0;

    int a[n];
     for (int i=0;i<n;i++){
        cin>>a[i];}
for (int i=0;i<n;i++){
    cs=cs+a[i];
    if (cs<0){
        cs=0;
    }
    ms=max(cs,ms);
}
cout << ms;
return 0;}
