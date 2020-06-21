#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000];
    //using getline
    cin.getline(a,1000);
    int i=0;
    int j= strlen(a)-1;
    int flag=0;
    while (i<j){
        if (a[i]==a[j]){
            i++;
            j--;
            flag=0;
            break;} }
        if (flag==0){
            cout << "palindrome";
        }else {
            cout<<"not palindrome";}
return 0;}
