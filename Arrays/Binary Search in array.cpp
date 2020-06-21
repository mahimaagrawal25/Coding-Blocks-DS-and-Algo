#include <bits/stdc++.h>
using namespace std;
// binary search(efficient way to search in sorted arrays and lot more)
int binarysearch(int a[],int n, int key){
int s=0;
int e=n-1;
while (s<=e){
    int mid=(s+e)/2;
    if (a[mid]==key){
        return mid;
    }
    else if(a[mid]>key){
        e=mid-1;}
    else{
        s=mid+1;
    }


}
return -1; //if the element is not present in the array
}int main(){
  int a[1000];
  int n,key;
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<< "enter the element you want to search"<<endl;
  cin>>key;
  cout<<binarysearch(a,n,key);

  return 0;
}
