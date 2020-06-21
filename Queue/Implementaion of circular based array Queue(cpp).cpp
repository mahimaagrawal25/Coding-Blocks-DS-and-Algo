#include<iostream>
using namespace std;

class queue{
    int* arr;
    int ms; //maximum size
    int cs; //current size
    int front;
    int rear;
public:
    queue(int default_size = 7){
        this->front=0;
        this->rear = default_size - 1;
        this->ms = default_size;
        this->arr = new int[this->ms]();
        this->cs = 0;
    }
    bool isFull(){
        return this->ms == this->cs;
    }

    bool isEmpty(){
        return this->cs == 0;
    }
    void enqueue(int data){
        if(!isFull()){
            this->rear = (this->rear + 1)%this->ms;
            this->arr[this->rear] = data;
            this->cs += 1;
        }
    }
    void dequeue(){
        this->front = (this->front + 1)%this->ms;
        this->cs -= 1;
    }
    int getFront(){
        return this->arr[this->front];
    }
};

int main(int argc, char const *argv[]){
    queue q(10);
    for(int i=1;i<=6;i++){
        q.enqueue(i);

    }
    q.dequeue();
    q.enqueue(8);
    while(!q.isEmpty()){
        cout << q.getFront() << endl;
        q.dequeue();
    }
    return 0;
}