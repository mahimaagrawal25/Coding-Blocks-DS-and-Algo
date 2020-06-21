#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[1000][1000];
    for (int row=0;row<=4;row++){
        for (int col=0;col<=2;col++){
            cin >> a[row][col];
            cout << a[row][col]<<" ";}
       cout << endl;}
    
    //Wave Print
    for (int col=0;col<=2;col++){
        if (col%2==0){
        for (int row=0;row<=4;row++){
            cout << a[row][col]<< " ";
            }}else{
                for (int row=4;row>=0;row--){
                    cout<< a[row][col]<< " ";}}}
            return 0;}
