#include<iostream>
using namespace std;
int main(){
    //First Method
    char a[][10]={{'a','b','c','\0'},{'d','e','f','\0'}};
    cout << a[0]<<endl;
    cout << a[1]<<endl;

    //Second Method
    char b[][10]={"abc","def","ghi","hello"};
    cout << b[2]<<endl;
    cout << b[3]<<endl;

    //update a particular character at a place
    char c[10][10];
    c[0][0]='A';
        
            return 0;}
