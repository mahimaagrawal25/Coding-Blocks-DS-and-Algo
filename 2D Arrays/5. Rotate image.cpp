#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10][10];
    int m,n;
    cin>>m>>n;
    int val=1;
   for (int row=0;row<m;row++){
        for (int col=0;col<n;col++){
        a[row][col]=val;
            cout << a[row][col]<<" ";
            val++;}
       cout << endl;}   
             for (int col=n-1;col>=0;col--){
        for (int row=0;row<m;row++){
        cout << a[row][col] << " ";
        }
        cout << endl;
        }

            return 0;}
