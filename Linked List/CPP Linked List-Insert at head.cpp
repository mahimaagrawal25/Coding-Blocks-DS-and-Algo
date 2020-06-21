#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    //constructor
    node(int d){
        data = d;
        next = NULL;
    }

};
//two approach to make linkedlists- class and functions
/*class linkedlists{
    node*head;
    node*tail;
public:
    linkedlists(){
        head = NULL;
        tail = NULL;
    }
    void insert(){

    }
}*/

//passing a pointer variable by referance
void insertAtHead(node*&head, int data){
    node* n = new node(data);
    n->next = head;
    head = n;
}
void print(node*head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    node*head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    print(head);
    return 0;
}