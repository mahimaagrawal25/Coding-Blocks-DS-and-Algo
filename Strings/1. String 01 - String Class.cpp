#include<iostream>
#include<string>
using namespace std;
int main(){
    string stringobject; //it is null string
    string s1("Hello");
    string s2="Hello World";
    string s3(s2); // s3=s2
    string s4=s3;
    char a[] = {'a','b','c','\0'};
    string s5(a);
    cout<<stringobject<<endl; 
    cout<<s1<<endl; 
    cout<<s2<<endl; 
    cout<<s3<<endl; 
    cout<<s4<<endl; 
    cout<<s5<<endl; 
    
    //using empty() function to check whether our string is empty or not
    if (stringobject.empty()){
        cout << "stringobject is an empty string"<<endl;
    }
    stringobject.append("I love cpp");
    cout<<stringobject<<endl; 
    string s6=" and python";
    string s7=stringobject+s6;
    cout<<s7<<endl;
    
    cout<< stringobject.length()<< endl;
//clear everything from string using clear() function
stringobject.clear();
cout<< stringobject.length()<< endl;
//compare two strings
  string s0="Apple";
  s1="Mango";
  cout<<s0.compare(s1)<<endl; // Return an integer >0 or <0 or ==0
    // the result is -12 which means Apple is smaller than Mango
    cout<<s1.compare(s0)<<endl; // The output is reverse
    cout<<s0.compare(s0)<<endl; // Output is zero
    //Overloaded Operator Operates
    if(s0 < s1){
        cout<< "Mango is lexographically greater then Apple"<<endl;
    }else{
       cout<< "Apple is lexographically greater then Mango"<<endl; 
    }
    cout << s0[3] << endl;
    // Find Substrings
    string s="I love apple";
    int idx=s.find("apple");
    cout<<idx<< endl;
    // remove a word from string
    string word="apple";
    int len = word.length();
    s.erase(idx,len+1);
    cout<<s<<endl;

    //Iterate over all the characters in the string
    //1.using for loop
for (int i=0;i<s1.length();i++){
    cout<< s1[i];

}cout << endl;

//2.Iterators
for (auto it=s1.begin();it != s1.end(); it++){
    cout<<(*it)<<","; //'it' is a pointer which will print the value assigned to 'it' 
}
cout<< endl;
//for each loop
for (auto c:s1){
    cout<< c<<",";
}cout<<endl;
    return 0;

}
   
