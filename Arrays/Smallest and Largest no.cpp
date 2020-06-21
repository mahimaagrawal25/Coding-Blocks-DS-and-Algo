#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,key;
  cin>>n;
  int a[1000];
  for (int i=0;i<n;i++){
   cin>>a[i]; 
    
    
  }
  //maximum limit of integers is given by INT_MAX and minmum limit is given by INT_MIN
  int largest = INT_MIN;
  int smallest = INT_MAX;
  for (int i=0; i<n; i++){
    if (a[i]>largest){
    largest=a[i];
    }
    if (a[i] < smallest){
      smallest=a[i];}}
  cout<<"largest"<<largest<<endl;
  cout<<"smallest"<<smallest<<endl;
return 0;
}
