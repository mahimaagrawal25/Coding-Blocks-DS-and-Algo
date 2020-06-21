#include<bits/stdc++.h>
using namespace std;
int main(){
    int val=1;
    int a[1000][1000];
    for (int row=0;row<=4;row++){
        for (int col=0;col<=2;col++){
            a[row][col]=val;
            val=val+1;
            cout << a[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
