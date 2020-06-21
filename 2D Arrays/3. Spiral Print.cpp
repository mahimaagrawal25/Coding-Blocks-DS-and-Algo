#include<bits/stdc++.h>
using namespace std;
void spiralprint(int a[][1000]){
    int startrow=0;
    int startcol=0;
    int endrow=3;
    int endcol=3;
    
    while (startrow<=endrow and startcol<=endcol){
        //First Row
        for (int i=startcol; i<=endcol;i++){
            cout << a[startrow][i]<<" "; 
        }
        startrow++;
        for(int i=startrow; i<=endrow;i++){
            cout << a[i][endcol]<<" ";
        }
        endcol--;
   
    //Bottom Row
    for (int i=endcol; i>=startcol;i--){
        cout << a[endrow][i]<<" ";
    }
endrow--;
//start col
for(int i=endrow;i>=startrow;i--){
    cout << a[i][startcol] <<" ";
}
startcol++;
}}

int main(){
    int a[1000][1000];
    for (int row=0;row<=3;row++){
        for (int col=0;col<=3;col++){
            cin >> a[row][col];
            cout << a[row][col]<<" ";}
       cout << endl;}
    spiralprint (a);
    
    
            return 0;}
