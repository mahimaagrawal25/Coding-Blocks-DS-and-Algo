#include<iostream>
using namespace std;
int main(){
    char a[100][100];
    //read a list of strings and we will store them in a 2D character array
    int n; //no of strings
    cin>>n;
    cin.get();//use to consume the extra enter that are given after n
    //taking input row by row
    for(int i=0;i<n;i++){
        cin.getline(a[i],100); 
    }
    //print all the strings
     for(int i=0;i<n;i++){
        cout<< a[i]<<endl;
    }
        
            return 0;}
