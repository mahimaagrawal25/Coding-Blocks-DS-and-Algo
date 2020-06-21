#include<bits/stdc++.h>
using namespace std;
//compare on the bsis of length and lexographical order
bool compare(string a,string b){
    if (a.length()==b.length()){
        return a<b;
    }
    return a.length()>b.length();
} 
int main(){
    //taking strings as input
    int n;
    cin >> n;

    cin.get();
    string s[100]; 
     for (int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    sort(s,s+n,compare);
   
    for (int i=0; i<n;i++){
        cout << s[i] << endl;
    }
    
    
return 0;}
