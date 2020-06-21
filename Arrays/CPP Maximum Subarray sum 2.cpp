#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int cumsum[n]={0};
    cin>>a[0];
    cumsum[0]=a[0];
    for (int i=1;i<n;i++){
        cin>>a[i];
        cumsum[i]=cumsum[i-1] + a[i];
    }
    //using cumulative sum
    int currentsum=0;
    int maximumsum=0;
    int left = -1;
    int right = -1;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            currentsum=0;
            currentsum=cumsum[j] - cumsum[i-1];
                
                if (currentsum > maximumsum){
                    maximumsum=currentsum;
                    left = i;
                    right = j;
                }
        }
    }
    cout<<maximumsum<<endl;
    // print the subarray of which the sum has been calculated
    for (int k=left; k<=right; k++){
        cout<<a[k]<< ",";
    }

    return 0;
}
