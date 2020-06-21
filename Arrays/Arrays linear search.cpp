#include <bits/stdc++.h>
using namespace std;
// linear search (search for the element is present in the array and at what index)
int main(){
int a[1000], n, key;
cin >> n;
for (int i=0;i<n;i++){
    cin >> a[i];
}
cin >> key;
int i;
for (int i=0;i<n;i++){
if (a[i] == key){
        cout << key << "found at" << i << "index" << endl;
        break;
}}
if (i == n){
    cout << key << "is not present" << endl;
}


return 0;

}
