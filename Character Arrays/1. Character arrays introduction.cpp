#include<iostream>
using namespace std;
int main(){
    int b[] = {1,2,3};
    cout<< b << endl; // it will print the address of the 0th index element. we have to put loop to print all the elements
    
    char a[] = {'a','b','c','d','e','\0'};
    cout << a << endl; // print abcde terminated by null
    
    char s1[] = {'h','e','l','l','o'};
    char s2[] = "hello";
    cout << s1 << " " << sizeof(s1) << endl; // here abcde is garbage value and will run until it finds the null character
    cout << s2 << " " << sizeof(s2) << endl; // here null null is also stored as an element so it has 6 size
    
    char s3[10] = "hello";
    char s4[10];
    cin>> s4;
    cout<<s4<<endl;
    
    return 0;
}
