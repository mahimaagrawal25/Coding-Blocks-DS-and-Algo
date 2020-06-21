#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int currentsum=0;
    int maximumsum=0;
    int left = -1;
    int right = -1;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            currentsum=0;
            for (int k=i;k<=j;k++){
                currentsum += a[k];
                }
                
                if (currentsum > maximumsum){
                    maximumsum=currentsum;
                }
        }
    }
    cout<<maximumsum<<endl;
    return 0;
}
