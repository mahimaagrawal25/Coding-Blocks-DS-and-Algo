#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100][100];
    int s;
    int m, n,k;
    cin>>n>>m>>k>>s;
   for (int row=0;row<m;row++){
        for (int col=0;col<n;col++){
            char a[row][col];
            cin >> a[row][col];
            cout << a[row][col]<<" ";}
       cout << endl;}
        for (int row=0;row<m;row++){
        for (int col=0;col<n;col++){
            if (a[row][col]=='.'){
                s=s-2;
            }else if (a[row][col]=='*'){
                s+=5;
            }else if(a[row][col]=='#'){
                break;
            }
            if (col==n-1){
                break;
            }else{
                s--;}}}
        if (s>=k){
            cout<<"Yes"<<" "<<s;
        }else{
            cout<<"No"<<" "<<s;
        }

            return 0;}
