#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a[]={1,3,5,7,10,11,12,13};
    int s=16;
    int i=0;
    int j=sizeof(a)/sizeof(int)-1;
    while (i<j){
        int currentsum=a[i]+a[j];
        if (currentsum>s){
            j--;
        }
        else if (currentsum<s) {
            i++;
        }
        else if (currentsum==s){
            cout<<a[i]<<"and"<<a[j]<<endl;
            i++;
            j--;
        }
    }
   

    return 0;
}